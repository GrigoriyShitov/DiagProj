CC= g++
PARSER= SibParser
all:
	cd $(PARSER) && make $@
	$(CC) -dM -E -x c++ /dev/null
	$(CC) -std=gnu++20 *.cpp $(PARSER)/Libs/*.a -o executable
