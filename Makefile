all:
	g++ -c ./input.cpp ./tests.cpp ./enigma.cpp
	g++ -Wall ./input.cpp ./tests.cpp ./enigma.cpp ./main.cpp -o enigma

clean:
	rm -f input.o tests.o enigma.o enigma
