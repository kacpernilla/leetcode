main: main.cpp
	g++-16 -std=c++26 -O2 main.cpp -o main && ./main

run:
	./main
