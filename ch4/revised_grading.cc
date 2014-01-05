#include "Student_info.h"
#include "grade.h"
#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>
#include <stdexcept>
#include <string>


using std::cout; using std::endl;
using std::cin; using std::vector;
using std::max; using std::sort;
using std::streamsize; using std::domain_error;
using std::setprecision; using std::string;


int main() {
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    //read and store all the students data
    while(read(cin, record)) {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    //alphabetize the student records
    sort(students.begin(), students.end(), compare);

    //write names and graders
    for(vector<Student_info>::size_type i = 0; i < students.size(); i++) {
       //write name padded on the right with maxlen + 1 characters
       cout << students[i].name << string(maxlen + 1 - students[i].name.size(), ' ');

       //compute and write grade
       try {
            double final_grade = grade(students[i].midterm, students[i].final, students[i].homework);
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade << setprecision(prec) ;
       } catch (domain_error e) {
            cout << e.what();
       }

       cout << endl;
    }

    return 0;
}
