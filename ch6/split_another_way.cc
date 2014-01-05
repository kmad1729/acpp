#include "common_headers.h"
using std::find_if;

bool is_space(char c) {
    // cannot use isspace directly because the function is overloaded. The compiler will not know which function to use
    return isspace(c);
}

bool not_space(char c) {
    return !isspace(c); 
}

vector<string> split(const string& inp_string) {
    vector<string> ret;
    typedef string::const_iterator iter;
    iter i = inp_string.begin();
    while(i != inp_string.end()) {
        i = find_if(i, inp_string.end(), not_space);
        iter j = find_if(i, inp_string.end(), is_space);
        if(i != j) {
            ret.push_back(string(i,j));
        }
        i = j;

    }
    return ret;
}

void print_vector(const vector<string>& vec) {
    cout << "[";
    for(vector<string>::const_iterator iter = vec.begin(); iter != vec.end(); iter++) {
        cout << *iter << ",";
    }
    cout << "]" << endl;
}
int main() {
    string test_string = "kashyap is was dfadfa     will  dfad fad 213qqasd fasdfa p123         dfa \n afda";

    cout << "input string = " << test_string << endl;
    cout << "after split = ";
    print_vector(split(test_string));
}

