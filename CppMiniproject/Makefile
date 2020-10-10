all: all.out 
all.out: cost.o tanker.o city.o Watercost.o Watercost_test.o
	g++ $^ -o $@ -lgtest -lgtest_main -lpthread

Watercost_test.o: Watercost_test.cpp cost.h tanker.h city.h Watercost.h 
	g++ $< -c

Watercost.o: Watercost.cpp Watercost.h cost.h tanker.h city.h
	g++ $< -c
city.o: city.cpp city.h cost.h tanker.h
	g++ $< -c
cost.o: cost.cpp cost.h
	g++ $< -c
tanker.o: tanker.cpp tanker.h
	g++ $< -c
valgrind: ./all.out
	valgrind ./all.out
cppcheck: *.cpp
	cppcheck *.cpp
clean:
	rm -rf *.o *.out *.gch
