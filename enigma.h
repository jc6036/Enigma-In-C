#ifndef ENIGMA_H_
#define ENIMGA_H_

// Three arrays are defined here in enigma.cpp, couldn't include them here.


char encrypt_single_character (char input, int first_wheel_setting=1); // Single character encryption through enigma.
char encrypt_single_threewheel (char input,  int first_setting, int second_setting, int third_setting,
                                int first_wheel[], int second_wheel[], int third_wheel[]);
// The configurable wheels can be setup using arrays of numbers 1-26. 


#endif // Definition for engima.cpp header file
