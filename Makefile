CXX := g++

main: $(wildcard *.cpp)
	$(CXX) $(wildcard *.cpp)
	./a.out