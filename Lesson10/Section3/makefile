All: compile run

compile:
	g++ -I ./include/ -o ./lib/Ricxvi.o -c ./src/Ricxvi.cpp
	g++ -I ./include/ -o ./lib/Student.o -c ./src/Student.cpp
	g++ -I ./include/ -o ./bin/Test ./lib/Ricxvi.o ./lib/Student.o ./src/Test.cpp
	
run:
	./bin/Test