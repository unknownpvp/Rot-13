CXXFLAGS += --std=c++11

all: main

rebuild: clean main

main: main.o cypher.o rot13.o substitution.o
	$(CXX) $(CXXFLAGS) -o encode main.o cypher.o rot13.o substitution.o
main.o: main.cpp cypher.h rot13.h substitution.h
	$(CXX) $(CXXFLAGS) -c main.cpp
cypher.o: cypher.cpp cypher.h
	$(CXX) $(CXXFLAGS) -c cypher.cpp
rot13.o: rot13.cpp rot13.h
	$(CXX) $(CXXFLAGS) -c rot13.cpp
substitution.o: substitution.cpp substitution.h
	$(CXX) $(CXXFLAGS) -c substitution.cpp
clean:
	-rm -f *.o *.gch *~ a.out encode *.rot13 *.subst
