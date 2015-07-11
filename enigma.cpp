#include <iostream>
#include <map>

using namespace std;

int first_wheel_default[] = {5, 3, 2, 1, 4, 8, 9, 10, 7, 6, 
                             12, 11, 14, 15, 13, 18, 20, 16, 19, 
                             17, 24, 22, 23, 21, 26, 25};

int second_wheel_default[] = {5, 4, 2, 3, 1, 10, 9, 7, 8, 6,
                              15, 14, 16, 13, 12, 11, 20, 19, 17, 18, 
                              26, 25, 23, 24, 21};

int third_wheel_default[] = {26, 25, 22, 21, 23, 20, 19, 18, 16, 17,
                             11, 15, 12, 13, 14, 10, 5, 9, 8, 7, 6,
                             3, 2, 1, 4};

char letter_wheel_setup[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                             'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                             's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

int reflector_wheel_setup[] = {14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26,
                               1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13};

char encrypt_single_character (char input, int first_wheel_setting = 1) {
// This is a prototype function, simply meant for basic functionality as a proof-of-concept.
// This will be either deprecated or simply removed at the completion of a more useful function.
// I use arrays of pairs to represent the wheels of the enigma. This function contains three wheels;
// the first wheel, which is static and has letters of the alphabet, the second wheel, which is
// configurable, and the third wheel, which is known as the reflector wheel. The configurable wheel
// defaults to setting number 1.

    map <int, char> letter_wheel;
    letter_wheel[1]='a'; letter_wheel[2]='b'; letter_wheel[3]='c'; letter_wheel[4]='d';
    letter_wheel[5]='e'; letter_wheel[6]='f'; letter_wheel[7]='g'; letter_wheel[8]='h';
    letter_wheel[9]='i'; letter_wheel[10]='j'; letter_wheel[11]='k'; letter_wheel[12]='l';
    letter_wheel[13]='m'; letter_wheel[14]='n'; letter_wheel[15]='o'; letter_wheel[16]='p';
    letter_wheel[17]='q'; letter_wheel[18]='r'; letter_wheel[19]='s'; letter_wheel[20]='t';
    letter_wheel[21]='u'; letter_wheel[22]='v'; letter_wheel[23]='w'; letter_wheel[24]='x';
    letter_wheel[25]='y'; letter_wheel[26]='z'; // This populates the letter-wheel map.

    map <int, int> reflector;
    reflector[1]=14; reflector[2]=15; reflector[3]=16; reflector[4]=17; reflector[5]=18;
    reflector[6]=19; reflector[7]=20; reflector[8]=21; reflector[9]=22; reflector[10]=23;
    reflector[11]=24; reflector[12]=25; reflector[13]=26; reflector[14]=1; reflector[15]=2;
    reflector[16]=3; reflector[17]=4; reflector[18]=5; reflector[19]=6; reflector[20]=7;
    reflector[21]=8; reflector[22]=9; reflector[23]=10; reflector[24]=11; reflector[25]=12;
    reflector[26]=13;

    map<int, int> wheel_one; // Basic wheel setup; after POC this will be far more complex.
    wheel_one[0]=first_wheel_setting; // Key 0 will contain the current setting for the wheel.
    wheel_one[1]=2; wheel_one[2]=3; wheel_one[3]=4; wheel_one[4]=5; wheel_one[5]=6; 
    wheel_one[6]=7; wheel_one[7]=8; wheel_one[8]=9; wheel_one[9]=10; wheel_one[10]=11;
    wheel_one[11]=12; wheel_one[12]=13; wheel_one[13]=14; wheel_one[14]=15; wheel_one[15]=16;
    wheel_one[16]=17; wheel_one[17]=18; wheel_one[18]=19; wheel_one[19]=20; wheel_one[20]=21;
    wheel_one[21]=22; wheel_one[22]=23; wheel_one[23]=24; wheel_one[24]=25; wheel_one[25]=26;
    wheel_one[26]=1; // Every position on the wheel is accounted for. This map represents the cross
                     // wiring of the configurable enigma wheels. 

    // Reflector wheel sends signal to the current number plus 13 modulo 26
    // The actual algorithmic section should be started just below this comment.
    int map_follower;
    int next_contact;
    char output_char;
    for (map_follower = 1; map_follower <= 26; map_follower++) {
        if (input == letter_wheel[map_follower]) { // Loop through and figure out which contact to
            next_contact = map_follower;           // start on based on user input.
            break;
        }
        else {
            continue;
        }
    }

    next_contact = wheel_one[next_contact]; // Row of statements represents the way the contacts work
    next_contact = reflector[next_contact]; // on the enigma for a single pass. This may be done more
    next_contact = wheel_one[next_contact]; // elegently in future functions.
    output_char = letter_wheel[next_contact];
    return output_char;
}

char encrypt_single_threewheel (char input,  int first_setting, int second_setting, int third_setting,
                                int first_wheel[]=first_wheel_default, 
                                int second_wheel[]=second_wheel_default, 
                                int third_wheel[]=third_wheel_default)
{
    // I for-sure need to track the wheel positions located at 0 on the pairmaps.

    map <int, char> letter_wheel;
    letter_wheel[1]='a'; letter_wheel[2]='b'; letter_wheel[3]='c'; letter_wheel[4]='d';
    letter_wheel[5]='e'; letter_wheel[6]='f'; letter_wheel[7]='g'; letter_wheel[8]='h';
    letter_wheel[9]='i'; letter_wheel[10]='j'; letter_wheel[11]='k'; letter_wheel[12]='l';
    letter_wheel[13]='m'; letter_wheel[14]='n'; letter_wheel[15]='o'; letter_wheel[16]='p';
    letter_wheel[17]='q'; letter_wheel[18]='r'; letter_wheel[19]='s'; letter_wheel[20]='t';
    letter_wheel[21]='u'; letter_wheel[22]='v'; letter_wheel[23]='w'; letter_wheel[24]='x';
    letter_wheel[25]='y'; letter_wheel[26]='z'; // This populates the letter-wheel map.

    // Reflector wheel sends signal to the current number plus 13 modulo 26
    map <int, int> reflector;
    reflector[1]=14; reflector[2]=15; reflector[3]=16; reflector[4]=17; reflector[5]=18;
    reflector[6]=19; reflector[7]=20; reflector[8]=21; reflector[9]=22; reflector[10]=23;
    reflector[11]=24; reflector[12]=25; reflector[13]=26; reflector[14]=1; reflector[15]=2;
    reflector[16]=3; reflector[17]=4; reflector[18]=5; reflector[19]=6; reflector[20]=7;
    reflector[21]=8; reflector[22]=9; reflector[23]=10; reflector[24]=11; reflector[25]=12;
    reflector[26]=13;

    // These must be hard coded into each encryption function.
    // Configurable wheels are initialized below.
  
    int array_follower;
    int map_follower; // One to follow the map keys, one to follow the input arrays.

    map <int, int> wheel_one; // Initialize wheel one
    wheel_one[0]=first_setting; // 0 is where the current wheel setting is stored.
    for (array_follower=0, map_follower=1; array_follower <= 25; array_follower++, map_follower++) {
        wheel_one[map_follower]=first_wheel[array_follower];
    }

    map <int, int> wheel_two; // Initialize wheel two
    wheel_two[0]=second_setting;
    for (array_follower=0, map_follower=1; array_follower <= 25; array_follower++, map_follower++) {
        wheel_two[map_follower]=second_wheel[array_follower];
    }

    map <int, int> wheel_three; // Initialize wheel three
    wheel_three[0]=third_setting;
    for (array_follower=0, map_follower=1; array_follower <= 25; array_follower++, map_follower++) {
        wheel_three[map_follower]=third_wheel[array_follower];
    }

    return 'a'; // Default return until function is finished.
}












