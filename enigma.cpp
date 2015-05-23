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
    wheel_one[0]=1; // Key 0 will contain the current setting for the wheel.
    wheel_one[1]=2; wheel_one[2]=3; wheel_one[3]=4; wheel_one[4]=5; wheel_one[5]=6; 
    wheel_one[6]=7; wheel_one[7]=8; wheel_one[8]=9; wheel_one[9]=10; wheel_one[10]=11;
    wheel_one[11]=12; wheel_one[12]=13; wheel_one[13]=14; wheel_one[14]=15; wheel_one[15]=16;
    wheel_one[16]=17; wheel_one[17]=18; wheel_one[18]=19; wheel_one[19]=20; wheel_one[20]=21;
    wheel_one[21]=22; wheel_one[22]=23; wheel_one[23]=24; wheel_one[24]=25; wheel_one[25]=26;
    wheel_one[26]=1; // Every position on the wheel is accounted for. This map represents the cross
                     // wiring of the configurable enigma wheels. 

    map<int, int> reflector; // Reflector wheel sends signal to the current number plus 13 modulo 26
    reflector[1]=14; reflector[2]=15; reflector[3]=16; reflector[4]=17; reflector[5]=18;
    reflector[6]=19; reflector[7]=20; reflector[8]=21; reflector[9]=22; reflector[10]=23;
    reflector[11]=24; reflector[12]=25; reflector[13]=26; reflector[14]=1; reflector[15]=2;
    reflector[16]=3; reflector[17]=4; reflector[18]=5; reflector[19]=6; reflector[20]=7;
    reflector[21]=8; reflector[22]=9; reflector[23]=10; reflector[24]=11; reflector[25]=12;
    reflector[26]=13;

    // The wheels are only to be hardcoded for the proof of concept. Generator functions will be 
    // created for the configurable wheels, and the static wheels may be generated more
    // elegantly using a for loop.


}
