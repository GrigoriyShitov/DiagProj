/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "EUTRA-RRC-Definitions"
 * 	found in "../lte-rrc-18.1.0.asn1"
 * 	`asn1c -fcompound-names -pdu=all`
 */

#include "CellReselectionParametersCDMA2000.h"

asn_TYPE_member_t asn_MBR_CellReselectionParametersCDMA2000_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct CellReselectionParametersCDMA2000, bandClassList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BandClassListCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bandClassList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellReselectionParametersCDMA2000, neighCellList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NeighCellListCDMA2000,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"neighCellList"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct CellReselectionParametersCDMA2000, t_ReselectionCDMA2000),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_T_Reselection,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionCDMA2000"
		},
	{ ATF_POINTER, 1, offsetof(struct CellReselectionParametersCDMA2000, t_ReselectionCDMA2000_SF),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_SpeedStateScaleFactors,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"t-ReselectionCDMA2000-SF"
		},
};
static const int asn_MAP_CellReselectionParametersCDMA2000_oms_1[] = { 3 };
static const ber_tlv_tag_t asn_DEF_CellReselectionParametersCDMA2000_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_CellReselectionParametersCDMA2000_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandClassList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* neighCellList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* t-ReselectionCDMA2000 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* t-ReselectionCDMA2000-SF */
};
asn_SEQUENCE_specifics_t asn_SPC_CellReselectionParametersCDMA2000_specs_1 = {
	sizeof(struct CellReselectionParametersCDMA2000),
	offsetof(struct CellReselectionParametersCDMA2000, _asn_ctx),
	asn_MAP_CellReselectionParametersCDMA2000_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_CellReselectionParametersCDMA2000_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_CellReselectionParametersCDMA2000 = {
	"CellReselectionParametersCDMA2000",
	"CellReselectionParametersCDMA2000",
	&asn_OP_SEQUENCE,
	asn_DEF_CellReselectionParametersCDMA2000_tags_1,
	sizeof(asn_DEF_CellReselectionParametersCDMA2000_tags_1)
		/sizeof(asn_DEF_CellReselectionParametersCDMA2000_tags_1[0]), /* 1 */
	asn_DEF_CellReselectionParametersCDMA2000_tags_1,	/* Same as above */
	sizeof(asn_DEF_CellReselectionParametersCDMA2000_tags_1)
		/sizeof(asn_DEF_CellReselectionParametersCDMA2000_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_CellReselectionParametersCDMA2000_1,
	4,	/* Elements count */
	&asn_SPC_CellReselectionParametersCDMA2000_specs_1	/* Additional specs */
};

