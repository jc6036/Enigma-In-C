all:
	g++ -c ./input.cpp ./tests.cpp
	g++ -Wall ./input.cpp ./tests.cpp ./main.cpp -o enigma

clean:
	rm -f input.o tests.o enigma
