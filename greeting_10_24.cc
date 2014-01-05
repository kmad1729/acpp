#include<iostream>
#include<string>

using std::cout; using std::cin;
using std::string; using std::endl;

int main()
{
   cout << "Please enter your first name: ";
   string name;
   cin >> name;
   const string greeting = "Hi, " + name + "! How are you";
   const int pad = 5;
   const int rows = 2 * pad + 3;
   string::size_type cols = greeting.size() + 2 * pad + 2;
   string::size_type c = 0;

   for(int r = 0; r < rows; r++) {
        for (c = 0; c < cols; c++) {
            //if edge of the square, print *
            if (r == 0 || r == rows - 1 || c == 0 || c == cols - 1) {
                cout << "*";
            } else {
                //if time to write the greeting 
                if (r == pad + 1 && c == pad + 1) {
                    cout << greeting;
                    c += greeting.size();
                }
                cout << " ";
            }
        }
        cout << endl;
   }
}
