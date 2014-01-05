#include "common_headers.h"

bool is_palindrome(const string& s) {
    return equal(s.begin(), s.end(), s.rbegin());
}

int main() {
    string test_word = "madam";
    cout << "\"" << test_word <<  "\" " << "is palindrome? " << is_palindrome(test_word) << endl;

    test_word = "kashyap";
    cout << "\"" << test_word <<  "\" " << "is palindrome? " << is_palindrome(test_word) << endl;

    test_word = "raptpar";
    cout << "\"" << test_word <<  "\" " << "is palindrome? " << is_palindrome(test_word) << endl;

    test_word = "abcdcba";
    cout << "\"" << test_word <<  "\" " << "is palindrome? " << is_palindrome(test_word) << endl;

    test_word = "random word drow modnar";
    cout << "\"" << test_word <<  "\" " << "is palindrome? " << is_palindrome(test_word) << endl;

    test_word = "cpp is good";
    cout << "\"" << test_word <<  "\" " << "is palindrome? " << is_palindrome(test_word) << endl;
}
