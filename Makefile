compiler=g++
VPATH=src:o_files

__: main
main : main.o income.o
	$(compiler) o_files/main.o ./o_files/income.o -o income.exe

main.o : main.cpp
	$(compiler) -c ./src/main.cpp -o ./o_files/main.o

income.o : income.cpp
	$(compiler) -c ./src/income.cpp -o ./o_files/income.o