#include<iostream>
#include<string>
#include<vector>
#include<algorithm>


using std::cout; using std::cin;
using std::endl; using std::string;
using std::vector;


int main() 
{
    cout << "enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " + name + " welcome!" << endl;
    
    double midterm, final;
    typedef vector<double>::size_type vec_sz;

    cout << "Please enter your midterm and final grades" << endl;
    cin >> midterm >> final;

    vector<double> hw;
    cout << "Please enter your homework grades" << endl;
    double x;

    //building the homework vector
    while (cin >> x) {
        hw.push_back(x);
    }

    vec_sz size = hw.size();
    //sorting the homework vector
    if (size == 0) exit(1);
    sort(hw.begin(), hw.end());
    double mid = size / 2;
    double median = size % 2 == 0? (hw[mid - 1] + hw[mid])/2 : hw[mid]; 
    cout << "size of the hw vector is " << size << endl;
    cout << "median of the hw vector is " << median << endl;

    return 0;
}
