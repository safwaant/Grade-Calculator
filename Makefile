CXX := g++

compile: $(wildcard *.cpp)
	$(CXX) $(wildcard *.cpp)

run: 
	make compile
	./a.out
