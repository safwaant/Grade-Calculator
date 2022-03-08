CXX := g++

compile: $(wildcard *.cpp)
	$(CXX) $(wildcard *.cpp)

main: 
	make compile
	./a.out
