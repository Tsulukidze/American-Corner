All: compile run

compile:
	g++ -I ./include/ -o ./lib/Exception.o -c ./src/Exception.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/Exception.o ./src/Test.cpp
	
run:
	./bin/Test