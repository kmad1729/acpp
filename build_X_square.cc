#include<iostream>
#include<string>

using std::cout; using std::cin;
using std::endl; using std::string;

int main() {
    cout << "enter the square side: ";
    int square_side;
    cin >> square_side;
    for(int r = 0 ; r < square_side; r++) {
        for(int c = 0; c < square_side; c++) {
            //if it is an edge or a cross
            if ( (r == c) || ((r + c) == (square_side - 1)) ||
             r == 0 || r == square_side - 1 || c == 0 || c == square_side - 1 ) {
                cout << "* ";
            } else {
                cout << "  ";
            }
        }
        cout << endl;
    }
}
