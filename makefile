COMPILER=g++
CPPFLAGS=-Wall -g -pedantic -pedantic-errors -std=c++11

appleandorange:
	$(COMPILER) $(CPPFLAGS) -o appleandorange appleandorange.cpp

betweentwosets:
	$(COMPILER) $(CPPFLAGS) -o betweentwosets betweentwosets.cpp

breaking:
	$(COMPILER) $(CPPFLAGS) -o breaking breaking.cpp

catsandmouse:
	$(COMPILER) $(CPPFLAGS) -o catsandmouse catsandmouse.cpp

numberlinejumps:
	$(COMPILER) $(CPPFLAGS) -o numberlinejumps numberlinejumps.cpp

persistent:
	$(COMPILER) $(CPPFLAGS) -o persistent persistentNumbers.cpp

rainbow:
	$(COMPILER) $(CPPFLAGS) -o rainbow rainbowstring.cpp

team:
	$(COMPILER) $(CPPFLAGS) -o team acmteam.cpp

trouble:
	$(COMPILER) $(CPPFLAGS) -o trouble trouble.cpp

clean:
	rm appleandorange
	rm betweentwosets
	rm breaking
	rm catsandmouse
	rm numberlinejumps
	rm persistent
	rm rainbow
	rm team
	rm trouble