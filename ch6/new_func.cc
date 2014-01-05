#include<algorithm>
#include <fstream>
#include <string>
#include<iostream>

using std::string;
using std::cout;
using std::copy;
using std::endl;

string read_file_contents(string filename, char separator) {
    string ret;
    std::ifstream file(filename.c_str()); string str; 
    while(std::getline(file, str, separator)) {
        ret += str;
        ret.push_back('\n');
    }
    return ret;
}
//find urls program

int main() {
    string top = read_file_contents("inp.txt", '$');
    string bottom = read_file_contents("inp1.txt", '$');

    cout << "before" << endl;
    cout << top << endl;
    cout << string(20, '@') << endl;
    cout << bottom << endl;
    cout << string(20, '#') << endl;
    //usage of copy function
    //the folliing function copy's the bottom string under the top string
    cout << "after" << endl;
    copy(bottom.begin(), bottom.end(), back_inserter(top));

    cout << top << endl;
}
