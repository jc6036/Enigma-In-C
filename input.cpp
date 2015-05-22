#include <iostream>
#include "input.h"

using namespace std;

char get_letter_input () {
// Grabs a single character from cin and returns it.
    char input;
    cout << "Input a letter." << endl;
    cin >> input;
    return input;
}
