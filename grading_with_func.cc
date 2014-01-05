#include<iostream>
#include<string>
#include<algorithm>
#include<stdexcept>
#include<vector>
#include<iomanip>

using std::cout; using std::cin;
using std::endl; using std::vector;
using std::string; using std::setprecision;
using std::streamsize; using std::domain_error;
using std::istream;


double median(vector<double> vec) {
    if(vec.size() == 0) throw domain_error("cannot find median of an empty vector");
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();
    vec_sz mid = size / 2;

    sort(vec.begin(), vec.end());
    return mid % 2 == 0? (vec[mid - 1] + vec[mid])/2 : vec[mid];
}

double grade(double midterm, double final, double homework) {
    return (0.2 * midterm + 0.4 * final + 0.4 * homework);
}

double grade(double midterm, double final, const vector<double>& hw) {
    if(hw.size() == 0)
        throw domain_error("cannot calculate grade without homework grades");
    return grade (midterm, final, median(hw));
}

istream& read_hw(istream& in, vector<double>& hw) {
    if(in) {
        //clear the hw vector; make sure nothing is there from previous use of the function
        hw.clear();
        double x;
        while(in >> x) {
            hw.push_back(x);
        }
        in.clear();
    }
    return in;
}

int main() {
   cout << "Please enter your name: ";
   string name;
   cin >> name;
   cout << "Hello " + name << "!" << endl;

   cout << "Please enter your midterm and final grades" << endl;
   double midterm, final;
   cin >> midterm >> final;
   cout << "Please enter your homework grades"
            " enter EOF when done" << endl;
    
   vector<double> hw;
   read_hw(cin, hw);
    
   
   try {
       double final_grade = grade(midterm, final, hw);
       streamsize prec = cout.precision();
       cout << "your final grade is " << setprecision(3) 
            << final_grade << setprecision(prec) << endl;
   } catch (domain_error) {
       cout << endl << "You must enter your grades. "
               "please try again" << endl;
       return 1;
   }
   return 0;


   return 0;
}
