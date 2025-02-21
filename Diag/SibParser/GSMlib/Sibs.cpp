#include "Sibs.h"

#define fbuf_size 1024

bool parse2G(uint8_t *packet)
{

	GSMTAPPACK sib;
	size_t size = sizeof(packet);
	cout <<"Size of packet:"<< size << endl;
	uint8_t *ptr = packet;
	cout<< showbase <<hex<<"value ptr" << (int)*ptr<< endl;
	sib.L2PseudoL = (*ptr++ & 0xFC) >> 2;
	
	sib.ProtDisc = *ptr & 0x0f;
	sib.SkipInd = *ptr & 0xf0;
	sib.MesType = *(++ptr);
	if (sib.MesType == SYSTEM_INFORMATION_TYPE_1)
	{
		Sib1Pack pack;
		memcpy(&pack, &sib, sizeof(GSMTAPPACK));
		bool res = pack.Parse(++ptr);
		pack.printOutput();
	}
	else if (sib.MesType == SYSTEM_INFORMATION_TYPE_2)
	{
		Sib2Pack pack;
		memcpy(&pack, &sib, sizeof(GSMTAPPACK));
		bool res = pack.Parse(++ptr);
		pack.printOutput();
	}
	else if (sib.MesType == SYSTEM_INFORMATION_TYPE_2bis)
	{
		Sib2bisPack pack;
		memcpy(&pack, &sib, sizeof(GSMTAPPACK));
		bool res = pack.Parse(++ptr);
	}
	else if (sib.MesType == SYSTEM_INFORMATION_TYPE_2ter)
	{ // �������� rest octets
		Sib2terPack pack;
		memcpy(&pack, &sib, sizeof(GSMTAPPACK));
		bool res = pack.Parse(++ptr);
		pack.printOutput();
	}
	else if (sib.MesType == SYSTEM_INFORMATION_TYPE_3)
	{ // �������� rest octets
		Sib3Pack pack;
		memcpy(&pack, &sib, sizeof(GSMTAPPACK));
		bool res = pack.Parse(++ptr);
		pack.printOutput();
	}
	else if (sib.MesType == SYSTEM_INFORMATION_TYPE_4)
	{ // �������� rest octets
		Sib4Pack pack;
		memcpy(&pack, &sib, sizeof(GSMTAPPACK));
		bool res = pack.Parse(++ptr);
		pack.printOutput();
	}
	else if (sib.MesType == SYSTEM_INFORMATION_TYPE_5)
	{
		Sib5Pack pack;
		memcpy(&pack, &sib, sizeof(GSMTAPPACK));
		bool res = pack.Parse(++ptr);
		pack.printOutput();
	}
	else if (sib.MesType == SYSTEM_INFORMATION_TYPE_5bis)
	{
		Sib5bisPack pack;
		memcpy(&pack, &sib, sizeof(GSMTAPPACK));
		bool res = pack.Parse(++ptr);
		pack.printOutput();
	}
	else if (sib.MesType == SYSTEM_INFORMATION_TYPE_5ter)
	{
		Sib5terPack pack;
		memcpy(&pack, &sib, sizeof(GSMTAPPACK));
		bool res = pack.Parse(++ptr);
		pack.printOutput();
	}
	else if (sib.MesType == SYSTEM_INFORMATION_TYPE_6)
	{
		Sib6Pack pack;
		memcpy(&pack, &sib, sizeof(GSMTAPPACK));
		bool res = pack.Parse(++ptr);
		pack.printOutput();
	}
	else{
		std::cout<<" Твой пакет гавно"<<std::endl;
	}
	//cout<< dec<<"shift: "<<(int)(ptr-packet)<< " last byte:"<< hex<<showbase<<(int)*ptr<< endl;
	return 0;
}

uint8_t* GSMTAPPACK::NeighbourCellDescr(uint8_t& EXTIND, uint8_t& BAIND, uint8_t* ptr, uint8_t* ListPtr)
{
	// ������ � ����� ���� �������� ����� ������������� �������� ��������������� ����� (20 = 0010 0000 � 10 = 0001 0000)
	EXTIND = (*ptr & 0x20) >> 4;
	BAIND = (*ptr & 0x10) >> 4;

	ptr = CellChannelDescr(ptr, ListPtr);


	return ptr;
}

uint8_t* GSMTAPPACK::NeighbourCellDescr2(uint8_t& MultibandRep, uint8_t& BAIND, uint8_t* ptr, uint8_t* ListPtr)
{
	//������ � ������� ��� �������� ����� ������������ �������� Multiband reporting ( ����� 0x60 = 0110 0000)
	MultibandRep = (*ptr & 0x60) >> 4;

	// ����� ��� �������� ����� ������������� ������� ���������������� ���� (10 = 0001 0000)
	BAIND = (*ptr & 0x10) >> 4;

	//����������� �������. ����� � CellChannelDescr �������� ������� ������ (� ������ ���� ������ 1024,512,256 ��� 128 range)
	//����� ����������� ������� � Neighbour Cell Description 2 ���������� �� Neighbour Cell Description � CellChannelDescr
	//����� ������ ������������ �� 8,4,3,2 �����
	if (!(*ptr & 0x80)) {// 0x80 = 1000 0000 ��� ����������� 0 ������� ( ����� 0 x x x . x x x x)

		*ptr = *ptr & 0x0f;//������� �����
		for (int i = 0; i < 16;i++) {//���������� ������ Cell Channel Description
			for (int j = 0; j < 8;j++) {
				bool set = *ptr & (1 << j);
				if (set) {
					int pos = (15 - i) * 8 + j + 1;
					*ListPtr++ = pos;
				}
			}
			ptr++;
		}



	}
	else if (!(*ptr & 0x08))// 0x08 = 0000 1000 ��� ����������� 1024 range (����� 1 x x x . 0 x x x)
	{
	}
	else if (!(*ptr & 0x06))// 0x06 = 0000 0110 ��� ����������� 512 range (����� 1 x x x 1 0 0 x)
	{
	}
	else if (!(*ptr & 0x04))// 0x04 = 0000 0100 ��� ����������� 256 range (����� 1 x x x 1 0 1 x)
	{
	}
	else if (!(*ptr & 0x02))// 0x02 = 0000 0010 ��� ����������� 128 range (����� 1 x x x 1 1 0 x)
	{
	}
	else if (*ptr & 0x8e)// 0x8e = 1000 1110 ��� ����������� variable bit map
	{
	}
	return ptr++;
}

uint8_t* GSMTAPPACK::CellChannelDescr(uint8_t* ptr, uint8_t* ListPtr)
{
	//����������� �������. ����� � CellChannelDescr �������� ������� ������ (� ������ ���� ������ 1024,512,256 ��� 128 range)
	if (!(*ptr & 0xc0)) {// 0xc0 = 1100 0000 ��� ����������� 0 ������� ( ����� 0 0 x x x)


		*ptr = *ptr & 0x0f;//������� �����
		for (int i = 0; i < 16;i++) {//���������� ������ Cell Channel Description
			for (int j = 0; j < 8;j++) {
				bool set = *ptr & (1 << j);
				if (set) {
					int pos = (15 - i) * 8 + j + 1;
					*ListPtr++ = pos;
				}
			}
			ptr++;
		}
		/*for (int i = 0;i < 128;i++) {
			if (ARFCNsList[i] != 0)
			{
				cout << dec << (int)ARFCNsList[i] << " ";
			}
		}
		cout << endl;*/


	}
	else if (!(*ptr & 0x60))// 0x60 = 0110 0000 ��� ����������� 1024 range (����� 1 0 0 x x)
	{
	}
	else if (!(*ptr & 0x58))// 0x58 = 0101 1000 ��� ����������� 512 range (����� 1 0 1 0 0)
	{
	}
	else if (!(*ptr & 0x50))// 0x50 = 0101 0000 ��� ����������� 256 range (����� 1 0 1 0 1)
	{
	}
	else if (!(*ptr & 0x48))// 0x48 = 0100 1000 ��� ����������� 128 range (����� 1 0 1 1 0)
	{
	}
	else if (!(*ptr & 0x40))// 0x40 = 0100 0000 ��� ����������� variable bit map
	{
	}
	return ptr++;
}

uint8_t* GSMTAPPACK::CIDparse(uint16_t& CID, uint8_t* ptr)
{
	CID = *ptr++ << 8;//1 byte
	CID += *ptr++;//2 byte
	return ptr;
}

uint8_t* GSMTAPPACK::RACHparse(uint8_t RACH[5], uint16_t& ACC, uint8_t* ptr)
{
	switch (*ptr & 0xc0)//����� ��� ����������� Max Retransmissions(������������ �� ������ ���� �����)
	{//�������� �������������� � �������� ��������
	case 0:
		RACH[0] = 1;
		break;
	case 0x40:
		RACH[0] = 2;
		break;
	case 0x80:
		RACH[0] = 4;
		break;
	case 0xc0:
		RACH[0] = 7;
		break;
	default:
		break;
	}

	switch (*ptr & 0x3c)//����� ��� ����������� TX-integer(������������ 3,4,5,6 �����)
	{//�������� �������������� � �������� ��������
	case 0:
		RACH[1] = 3;
		break;
	case 0x04:
		RACH[1] = 4;
		break;
	case 0x08:
		RACH[1] = 5;
		break;
	case 0x0c:
		RACH[1] = 6;
		break;
	case 0x10:
		RACH[1] = 7;
		break;
	case 0x14:
		RACH[1] = 8;
		break;
	case 0x18:
		RACH[1] = 9;
		break;
	case 0x1c:
		RACH[1] = 10;
		break;
	case 0x20:
		RACH[1] = 11;
		break;
	case 0x24:
		RACH[1] = 12;
		break;
	case 0x28:
		RACH[1] = 14;
		break;
	case 0x2c:
		RACH[1] = 16;
		break;
	case 0x30:
		RACH[1] = 20;
		break;
	case 0x34:
		RACH[1] = 25;
		break;
	case 0x38:
		RACH[1] = 32;
		break;
	case 0x3c:
		RACH[1] = 50;
		break;
	default:
		break;
	}

	switch (*ptr & 0x02)//����� ��� ����������� Cell_Bar_Access(������������ �� 2 ����)
	{
	case 0:
		RACH[2] = 0;//the cell is not barred
		break;
	case 0x02:
		RACH[2] = 1;//the cell is barred
		break;
	default:
		break;
	}

	switch (*ptr & 0x01)//����� ��� ����������� Call reestablishment allowed(������������ �� 1 ����)
	{
	case 0:
		RACH[3] = 0;//Call reestablishment allowed in the cell
		break;
	case 0x01:
		RACH[3] = 1;//Call reestablishment not allowed in the cell
		break;
	default:
		break;
	}
	ptr++;
	switch (*ptr & 0x04)//����� ��� ����������� Emergency call allowed(������������ �� 1 ����)
	{
	case 0:
		RACH[4] = 0;//Emergency call allowed in the cell to all MSs
		break;
	case 0x04:
		RACH[4] = 1;//Emergency call not allowed in the cell except for the MSs that belong to one of the classes between to all MSs
		break;
	default:
		break;
	}

	ACC = *ptr++ << 8;
	ACC += *ptr++;

	return ptr;
}
uint8_t* GSMTAPPACK::LAIparse(uint8_t MCC[3], uint8_t MNC[3], uint16_t& LAC, uint8_t* ptr)
{
	MCC[1] = (*ptr & 0xf0) >> 4;//3 byte
	MCC[0] = *ptr++ & 0x0f;//3byte
	MCC[2] = *ptr & 0x0f;//4byte

	MNC[2] = (*ptr++ & 0xf0) >> 4;//4byte
	MNC[1] = (*ptr & 0xf0) >> 4;//5byte
	MNC[0] = *ptr++ & 0x0f;//5byte

	LAC = *ptr++ << 8;//6 byte
	LAC += *ptr++;//7 byte

	return ptr;
}
uint8_t* GSMTAPPACK::CELLSELECTparse(uint8_t CellSelectParam[5], uint8_t* ptr)
{
	CellSelectParam[0] = (*ptr & 0xe0);// CELL-RESELECT HYSTERESIS
	CellSelectParam[1] = (*ptr++ & 0x1f);// MS-TXPWR-MAX-CCH
	CellSelectParam[2] = (*ptr & 0x80);// ACS
	CellSelectParam[3] = (*ptr & 0x40);// NECI
	CellSelectParam[4] = (*ptr++ & 0x3f);// RXLEV-ACCESS-MIN

	return ptr;
}
//_________________________________________________________________________________________________________________________________
bool Sib1Pack::Parse(uint8_t* ptr)
{

	ptr = CellChannelDescr(ptr, ListPtr);

	//������� RACH Control Parametr
	ptr = RACHparse(RACH, ACC, ptr);

	Rest = *ptr;

	return true;
}

void Sib1Pack::printOutput()
{
	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl
		<< " Protocol Discirimator: " << (int)ProtDisc << endl
		<< " Skip Indicator: " << (int)SkipInd << endl
		<< " Message Type: System Infortmation Type 1 " << (int)MesType << endl << " ";

	cout << "BCCH Frequency List: ";

	while (ListPtr != &ARFCNsList[127])
	{
		if (*ListPtr != 0) {
			cout << dec << (int)*ListPtr << " ";
		}
		ListPtr++;
	}
	cout << endl;

	for (int i = 0; i < 5;i++) {
		switch (i)
		{
		case 0:
			cout << " Maximum " << dec << (int)RACH[i] << " retransmissions";
			break;
		case 1:
			cout << dec << (int)RACH[i] << " slots used to spread transmissions";
			break;
		case 2:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " The cell is barred";
			}
			else
			{
				cout << " The cell is not barred";
			}

			break;
		case 3:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " Call Reestablishment not allowed in the cell ";
			}
			else
			{
				cout << " Call Reestablishment allowed in the cell ";
			}

			break;
		case 4:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " Emergency call not allowed in the cell except for the MSs that belong to one of the classes between 11 to 15. ";
			}
			else
			{
				cout << " Emergency call allowed in the cell to all MSs  ";
			}
		default:
			break;
		}
		cout << endl << " ";
	}
	cout << "ACC: " << hex << showbase << (int)ACC << endl
		<< "Rest: " << (int)Rest
		<< endl;
		
}

bool Sib2Pack::Parse(uint8_t* ptr)
{

	ptr = NeighbourCellDescr(EXTIND, BAIND, ptr, ListPtr);

	//NCC ���� ����
	NCC = *ptr++;

	//������� RACH Control Parametr
	ptr = RACHparse(RACH, ACC, ptr);

	return true;
}

void Sib2Pack::printOutput()
{
	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl
		<< " Protocol Discirimator: " << (int)ProtDisc << endl
		<< " Skip Indicator: " << (int)SkipInd << endl
		<< " Message Type: System Infortmation Type 2 " << (int)MesType << endl << " ";

	if (EXTIND) {
		cout << (int)EXTIND << " EXTIND. The information element carries the complete BA" << endl << " ";
	}
	else {
		cout << (int)EXTIND << " EXTIND. The information element carries only a part of the BA" << endl << " ";
	}
	cout << (int)BAIND << "BA-IND. BCCH allocation sequence number indication  " << endl;


	cout << "BCCH Frequency List: ";

	while (ListPtr != &BCCHFreqList[127])
	{
		if (*ListPtr != 0) {
			cout << dec << (int)*ListPtr << " ";
		}
		ListPtr++;
	}
	cout << endl;

	cout << hex << "NCC permited: " << (int)NCC << endl;
	for (int i = 0; i < 5;i++) {
		switch (i)
		{
		case 0:
			cout << " Maximum " << dec << (int)RACH[i] << " retransmissions";
			break;
		case 1:
			cout << dec << (int)RACH[i] << " slots used to spread transmissions";
			break;
		case 2:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " The cell is barred";
			}
			else
			{
				cout << " The cell is not barred";
			}

			break;
		case 3:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " Call Reestablishment not allowed in the cell ";
			}
			else
			{
				cout << " Call Reestablishment allowed in the cell ";
			}

			break;
		case 4:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " Emergency call not allowed in the cell except for the MSs that belong to one of the classes between 11 to 15. ";
			}
			else
			{
				cout << " Emergency call allowed in the cell to all MSs  ";
			}
		default:
			break;
		}
		cout << endl << " ";
	}
	cout << "ACC: " << hex << showbase << ACC << endl;
}

bool Sib2bisPack::Parse(uint8_t* ptr)
{
	ptr = NeighbourCellDescr(EXTIND, BAIND, ptr, ListPtr);

	//������� RACH Control Parametr
	ptr = RACHparse(RACH, ACC, ptr);

	Rest = *ptr;

	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl << " Protocol Discirimator: " << (int)ProtDisc << endl << " Skip Indicator: " << (int)SkipInd << endl << " Message Type: " << (int)MesType << endl << endl << " EXT-IND: " << (int)EXTIND << endl << " BA-IND: " << (int)BAIND << endl << " ACC: " << (int)ACC << endl << " Rest octet " << (int)Rest << endl;


	return true;
}

void Sib2bisPack::printOutput()
{
	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl
		<< " Protocol Discirimator: " << (int)ProtDisc << endl
		<< " Skip Indicator: " << (int)SkipInd << endl
		<< " Message Type: System Infortmation Type 2bis " << (int)MesType << endl << " ";

	if (EXTIND) {
		cout << (int)EXTIND << " EXTIND. The information element carries the complete BA" << endl << " ";
	}
	else {
		cout << (int)EXTIND << " EXTIND. The information element carries only a part of the BA" << endl << " ";
	}
	cout << (int)BAIND << "BA-IND. BCCH allocation sequence number indication  " << endl;

	cout << "Extended BCCH Frequency List: ";

	while (ListPtr != &ExtendBCCHFreqList[127])
	{
		if (*ListPtr != 0) {
			cout << dec << (int)*ListPtr << " ";
		}
		ListPtr++;
	}
	cout << endl;

	for (int i = 0; i < 5;i++) {
		switch (i)
		{
		case 0:
			cout << " Maximum " << dec << (int)RACH[i] << " retransmissions";
			break;
		case 1:
			cout << dec << (int)RACH[i] << " slots used to spread transmissions";
			break;
		case 2:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " The cell is barred";
			}
			else
			{
				cout << " The cell is not barred";
			}

			break;
		case 3:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " Call Reestablishment not allowed in the cell ";
			}
			else
			{
				cout << " Call Reestablishment allowed in the cell ";
			}

			break;
		case 4:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " Emergency call not allowed in the cell except for the MSs that belong to one of the classes between 11 to 15. ";
			}
			else
			{
				cout << " Emergency call allowed in the cell to all MSs  ";
			}
		default:
			break;
		}
		cout << endl << " ";
	}
	cout << "ACC: " << hex << showbase << ACC << endl;

	cout << "Rest octet:" << Rest;
	cout << endl;
}

bool Sib2terPack::Parse(uint8_t* ptr)
{

	ptr = NeighbourCellDescr2(MultibandRep, BAIND, ptr, ListPtr);

	Rest[0] = *ptr++;
	Rest[1] = *ptr++;
	Rest[2] = *ptr++;
	Rest[3] = *ptr;

	return true;
}

void Sib2terPack::printOutput()
{
	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl
		<< "Protocol Discirimator: " << (int)ProtDisc << endl
		<< "Skip Indicator: " << (int)SkipInd << endl
		<< "Message Type: System Infortmation Type 3 " << (int)MesType << endl
		<< " Binary encoding of multiband reporting parameter as specified in 3GPP TS 45.008. MULTIBAND: " << dec << (int)MultibandRep << endl
		<< " BCCH allocation sequence number indication. BA-IND: " << hex << (int)BAIND << endl
		<< " Extended BCCH Frequency List: ";

	while (ListPtr != &ExtendBCCHFreqList[127])
	{
		if (*ListPtr != 0) {
			cout << dec << (int)*ListPtr << " ";
		}
		ListPtr++;
	}
	cout << endl;

	for (uint8_t i : Rest) {
		cout << hex << (int)i << " ";
	}
	cout << endl;
}



bool Sib3Pack::Parse(uint8_t* ptr)
{
	uint8_t *shift=ptr;

	ptr = CIDparse(CID, ptr);
	

	ptr = LAIparse(MCC, MNC, LAC, ptr);

	ControlChannelDescr[0] = *ptr++;//���� ����� ����� - ���������� ����� �����
	ControlChannelDescr[1] = *ptr++;
	ControlChannelDescr[2] = *ptr++;


	CellOptions[0] = (*ptr & 0x80) >> 7;// DN-IND
	CellOptions[1] = (*ptr & 0x40) >> 6;// PWRC
	CellOptions[2] = (*ptr & 0x30) >> 4;// DTX
	CellOptions[3] = (*ptr++ & 0x0f);//  RADIO-LINK-TIMEOUT

	ptr = CELLSELECTparse(CellSelectParam, ptr);

	ptr = RACHparse(RACH, ACC, ptr);

	Rest[0] = *ptr++;
	Rest[1] = *ptr++;
	Rest[2] = *ptr++;
	Rest[3] = *ptr;

	cout<< "SHIFT: "<<dec << showbase<< (int)(ptr-shift)<<endl;
	return true;
}

void Sib3Pack::printOutput()
{
	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl
		<< " Protocol Discirimator: " << (int)ProtDisc << endl
		<< " Skip Indicator: " << (int)SkipInd << endl
		<< " Message Type: System Infortmation Type 3 " << (int)MesType << endl
		<< " CID: " << dec << (int)CID << endl;

	//right order of mcc:
	cout << "MCC.MNC.LAC:";
	for (uint8_t i : MCC) {
		cout << dec << (int)i;
	}
	cout << ".";
	for (uint8_t i : MNC) {
		cout << dec << (int)i;
	}
	cout << "." << LAC << endl;

	//3 ������ Controll Channel Description
	cout << " 3 octets of Controll Channel Description: ";
	for (uint8_t i : ControlChannelDescr) {
		cout << hex << (int)i << " ";
	}
	cout << endl;

	for (int i = 0; i < 5;i++) {
		switch (i)
		{
		case 0:
			cout << " Maximum " << dec << (int)RACH[i] << " retransmissions";
			break;
		case 1:
			cout << dec << (int)RACH[i] << " slots used to spread transmissions";
			break;
		case 2:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " The cell is barred";
			}
			else
			{
				cout << " The cell is not barred";
			}

			break;
		case 3:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " Call Reestablishment not allowed in the cell ";
			}
			else
			{
				cout << " Call Reestablishment allowed in the cell ";
			}

			break;
		case 4:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " Emergency call not allowed in the cell except for the MSs that belong to one of the classes between 11 to 15. ";
			}
			else
			{
				cout << " Emergency call allowed in the cell to all MSs  ";
			}
		default:
			break;
		}
		cout << endl << " ";
	}
	cout << "ACC: " << hex << showbase << ACC << endl;
	cout << "Rest 4 octets:";
	for (uint8_t i : Rest) {
		cout << (int)i << " ";
	}
	cout << endl;
}



bool Sib4Pack::Parse(uint8_t* ptr)
{
	ptr = LAIparse(MCC, MNC, LAC, ptr);

	ptr = CELLSELECTparse(CellSelectParam, ptr);

	ptr = RACHparse(RACH, ACC, ptr);
	uint8_t i = 0;
	while (*ptr != 0x7e) {
		Rest[i] = *ptr;
		i++;
		ptr++;
	}

	return true;
}
void Sib4Pack::printOutput()
{
	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl
		<< " Protocol Discirimator: " << (int)ProtDisc << endl
		<< " Skip Indicator: " << (int)SkipInd << endl
		<< " Message Type: System Infortmation Type 4 " << (int)MesType << endl;

	//right order of mcc:
	cout << "MCC.MNC.LAC:";
	for (uint8_t i : MCC) {
		cout << dec << (int)i;
	}
	cout << ".";
	for (uint8_t i : MNC) {
		cout << dec << (int)i;
	}
	cout << "." << LAC << endl;

	for (int i = 0; i < 5;i++) {
		switch (i)
		{
		case 0:
			cout << " Maximum " << dec << (int)RACH[i] << " retransmissions";
			break;
		case 1:
			cout << dec << (int)RACH[i] << " slots used to spread transmissions";
			break;
		case 2:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " The cell is barred";
			}
			else
			{
				cout << " The cell is not barred";
			}

			break;
		case 3:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " Call Reestablishment not allowed in the cell ";
			}
			else
			{
				cout << " Call Reestablishment allowed in the cell ";
			}

			break;
		case 4:
			cout << dec << (int)RACH[i];
			if (RACH[i])
			{
				cout << " Emergency call not allowed in the cell except for the MSs that belong to one of the classes between 11 to 15. ";
			}
			else
			{
				cout << " Emergency call allowed in the cell to all MSs  ";
			}
		default:
			break;
		}
		cout << endl << " ";
	}
	cout << "ACC: " << hex << showbase << ACC << endl;
	cout << "Rest octets:";
	for (uint8_t i : Rest) {
		cout << (int)i << " ";
	}
	cout << endl;
}

bool Sib5Pack::Parse(uint8_t* ptr)
{
	ptr = NeighbourCellDescr(EXTIND, BAIND, ptr, ListPtr);

	return true;
}

void Sib5Pack::printOutput()
{
	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl
		<< "Protocol Discirimator: " << (int)ProtDisc << endl
		<< "Skip Indicator: " << (int)SkipInd << endl
		<< "Message Type: System Infortmation Type 5 " << (int)MesType << endl
		<< " BCCH allocation sequence number indication. BA-IND: " << hex << (int)BAIND << endl
		<< " BCCH Frequency List: ";

	while (ListPtr != &BCCHFreqList[127])
	{
		if (*ListPtr != 0) {
			cout << dec << (int)*ListPtr << " ";
		}
		ListPtr++;
	}
	cout << endl;
}

bool Sib5bisPack::Parse(uint8_t* ptr)
{
	ptr = NeighbourCellDescr(EXTIND, BAIND, ptr, ListPtr);
	return true;
}

void Sib5bisPack::printOutput()
{
	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl
		<< "Protocol Discirimator: " << (int)ProtDisc << endl
		<< "Skip Indicator: " << (int)SkipInd << endl
		<< "Message Type: System Infortmation Type 5bis " << (int)MesType << endl
		<< " BCCH allocation sequence number indication. BA-IND: " << hex << (int)BAIND << endl
		<< " Extension of the BCCH Frequency List: ";
	while (ListPtr != &ExtendBCCHFreqList[127])
	{
		if (*ListPtr != 0) {
			cout << dec << (int)*ListPtr << " ";
		}
		ListPtr++;
	}
	cout << endl;
}

bool Sib5terPack::Parse(uint8_t* ptr)
{
	ptr = NeighbourCellDescr2(MultibandeRep, BAIND, ptr, ListPtr);

	return false;
}

void Sib5terPack::printOutput()
{
	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl
		<< "Protocol Discirimator: " << (int)ProtDisc << endl
		<< "Skip Indicator: " << (int)SkipInd << endl
		<< "Message Type: System Infortmation Type 5bis " << (int)MesType << endl
		<< " BCCH allocation sequence number indication. BA-IND: " << hex << (int)BAIND << endl
		<< " Extension of the BCCH Frequency List: ";
	while (ListPtr != &ExtendBCCHFreqList[127])
	{
		if (*ListPtr != 0) {
			cout << dec << (int)*ListPtr << " ";
		}
		ListPtr++;
	}
	cout << endl;
}

bool Sib6Pack::Parse(uint8_t* ptr)
{
	ptr = CIDparse(CID, ptr);
	
	ptr = LAIparse(MCC, MNC, LAC, ptr);

	CellOptions[0] = (*ptr & 0xb0);// DTX
	CellOptions[1] = (*ptr & 0x40) >> 6;// PWRC
	CellOptions[2] = (*ptr++ & 0x0f);//  RADIO-LINK-TIMEOUT

	NCC = *ptr++;

	for (uint8_t i = 0; i < 7;i++) {
		Rest[i] = *ptr++;
	}
	return true;
}

void Sib6Pack::printOutput()
{
	cout << showbase << hex << "L2PseudoL: " << (int)L2PseudoL << endl
		<< "Protocol Discirimator: " << (int)ProtDisc << endl
		<< "Skip Indicator: " << (int)SkipInd << endl
		<< "Message Type: System Infortmation Type 6 " << (int)MesType << endl
		<< "Cell ID:" << dec << (int)CID << endl;

	//right order of mcc:
	cout << "MCC.MNC.LAC:";
	for (uint8_t i : MCC) {
		cout << dec << (int)i;
	}
	cout << ".";
	for (uint8_t i : MNC) {
		cout << dec << (int)i;
	}
	cout << "." << LAC << endl;

	//3 ������ Controll Channel Description ��������!!!!!
	cout << "1 octet of Cell options: ";
	for (uint8_t i : CellOptions) {
		cout << hex << (int)i << " ";
	}
	cout << endl
		<< hex << "NCC permited: " << (int)NCC << endl;


	cout << "Rest 7 octets:";
	for (uint8_t i : Rest) {
		cout << (int)i << " ";
	}
	cout << endl;

}
