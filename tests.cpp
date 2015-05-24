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

void test_single_char_encoding () {
    char output_result;
    char input_char;
    input_char = get_letter_input();
    output_result = encrypt_single_character(input_char);
    cout << "The result is " << output_result << endl;
}
