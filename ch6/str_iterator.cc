#include<string>
#include<iostream>

using std::string; using std::cin;
using std::cout; using std::endl;

int main() {
    string s = "abcdefghi zyxwvut";
    cout << "testing the string iterator" << endl;
    for(string::const_iterator iter = s.begin(); iter != s.end(); iter++) {
        cout << "iter item = " << (*iter) << endl;
    }
    return 0;
}
