#include <iostream>
#include <fstream>

using std::cout; using std::endl;
using std::ifstream; using std::getline;
using std::cerr; using std::string;

int main(int argc, char **argv) {
    int fail_count = 0;
    for(int i = 1; i < argc; i++) {
        ifstream in(argv[i]);

        if(in) {
            string s;
            while(getline(in, s))
                cout << s << endl;
        } else {
            fail_count++;
            cerr << "cannot open file " << argv[i] << endl;
        }

    }
    return 0;
}
