#include <iostream>
#include <string>

using std::string; using std::cin;
using std::cout; using std::endl;

int main()
{
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    const string greeting = "Hi, " + name + "!";
    const int padding = 1;
    const int rows = 2 * padding + 3;
    const string::size_type cols = greeting.size() + padding * 2 + 2;

    for(int r = 0; r < rows; r++) {
        string::size_type c = 0;
        while (c < cols) {
            // if row is greeting row
            if (r == padding + 1 && c == padding + 1) {
                cout << greeting; 
                c += greeting.size();
            } else {
                //if we are on the border
                if(r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                    cout << "*"; 
                } else {
                    cout << " ";        
                }
                c++;
            }
        }
        cout << endl;
    }
    return 0;
}
