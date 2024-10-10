CC= g++
PARSER= SibParser

multi:
	$(MAKE) -j 22 all
all:
	cd $(PARSER) && $(MAKE) multi
	#$(CC) -dM -E -x c++ /dev/null
	$(CC) -std=gnu++20 -w *.cpp $(PARSER)/Libs/*.a -o executable

clean:
	cd $(PARSER) && $(MAKE) clean