#include "grade.h"
#include "Student_info.h"
#include "median.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stdexcept>


using std::cin; using std::cout;
using std::vector; using std::string;
using std::endl; using std::max;
using std::setprecision; using std::streamsize;
using std::domain_error;

int main() {
    //create the vectors and variables
    vector<Student_info> students;
    Student_info s;
    string::size_type maxlen = 0;

    cout << "please enter student information" << endl;
    //read the input
    while(read_Student_info(cin, s)) {
        maxlen = max(maxlen, s.name.size());
        students.push_back(s);
    }

    sort(students.begin(), students.end(), compare);

    //process the input and show the result
    for(vector<Student_info>::size_type i = 0; i < students.size(); i++) {
       string student_name = students[i].name;
       cout <<student_name << string(maxlen - student_name.size() + 1, ' ');

       try {
           double final_grade = grade(students[i]);
           streamsize prec = cout.precision();
           cout << setprecision(3) << final_grade << setprecision(prec);
       } catch (domain_error e) {
            cout << e.what();
       }
       cout << endl;
    }
    return 0;
}
