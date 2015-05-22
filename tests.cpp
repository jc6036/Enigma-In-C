#include <iostream>
#include <map>
#include "tests.h"
#include "input.h"
#include "enigma.h"

using namespace std;

void test_single_char_retrieval () {
    // Tests get_letter_input found in input.cpp
    char printed_char = get_letter_input();
    cout << "The selected letter is " << printed_char << endl;
}
