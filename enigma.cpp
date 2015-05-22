#include <iostream>
#include <map>

using namespace std;

char encrypt_single_character (char input, int first_wheel_setting = 1) {
// This is a prototype function, simply meant for basic functionality as a proof-of-concept.
// This will be either deprecated or simply removed at the completion of a more useful function.
// I use arrays of pairs to represent the wheels of the enigma. This function contains three wheels;
// the first wheel, which is static and has letters of the alphabet, the second wheel, which is
// configurable, and the third wheel, which is known as the reflector wheel. The configurable wheel
// defaults to setting number 1.

    map<int, char> letter_wheel;
    letter_wheel[1]='a'; letter_wheel[2]='b'; letter_wheel[3]='c'; letter_wheel[4]='d';
    letter_wheel[5]='e'; letter_wheel[6]='f'; letter_wheel[7]='g'; letter_wheel[8]='h';
    letter_wheel[9]='i'; letter_wheel[10]='j'; letter_wheel[11]='k'; letter_wheel[12]='l';
    letter_wheel[13]='m'; letter_wheel[14]='n'; letter_wheel[15]='o'; letter_wheel[16]='p';
    letter_wheel[17]='q'; letter_wheel[18]='r'; letter_wheel[19]='s'; letter_wheel[20]='t';
    letter_wheel[21]='u'; letter_wheel[22]='v'; letter_wheel[23]='w'; letter_wheel[24]='x';
    letter_wheel[25]='y'; letter_wheel[26]='z'; // This populates the letter-wheel map.

    map<int, int> wheel_one; // Basic wheel setup; after POC this will be far more complex.
    // TO-DO: Fill out the statements to populate this map. Done for the day.


}
