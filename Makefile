all:
	g++ -c ./input.cpp ./tests.cpp ./enigma.cpp ./error.cpp
	g++ -Wall ./input.cpp ./tests.cpp ./enigma.cpp ./error.cpp ./main.cpp -o enigma

clean:
	rm -f input.o tests.o enigma.o error.o enigma
