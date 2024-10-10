CC= g++
GSM=GSMlib
UMTS=UMTSlib/build
LTE=LTElib/build
NETWORKDUMP=2g-and-4g-dump
OBJ = obj
LIBRARIES=Libs
EXE=Runable_App
multi:
	$(MAKE) -j 22 all

all: build

build:
	+ cd $(UMTS) && make -f main3g.mk 
	+ cd $(LTE) && make -f main4g.mk 
	+ $(CC) -Os -o $(GSM)/GSM.o -c $(GSM)/Sibs.cpp
	+ar rcs $(LIBRARIES)/GSM.a $(GSM)/GSM.o
	+ar rcs $(LIBRARIES)/UMTS.a $(UMTS)/*.o $(UMTS)/libasncodec.a 
	+ar rcs $(LIBRARIES)/LTE.a $(LTE)/*.o $(LTE)/libasncodec.a

regen:
	+ cd $(UMTS) && make -f main3g.mk clean && make -f main3g.mk regen 
	+ cd $(LTE) && make -f main4g.mk clean && make -f main4g.mk regen 

clean: 
	+ cd $(UMTS) && make -f main3g.mk clean 
	+ cd $(LTE) && make -f main4g.mk clean
	rm $(LIBRARIES)/*.a