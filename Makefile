#!make -f

CPP=clang++-9 -std=c++2a

run: demo
	./$^

demo: Demo.o FamilyTree.o
	$(CPP) $^ -o demo

test: TestCounter.o Test.o FamilyTree.o
	$(CPP) $^ -o test

%.o: %.cpp FamilyTree.hpp
	$(CPP) --compile $< -o $@

clean:
	rm -f *.o demo test
