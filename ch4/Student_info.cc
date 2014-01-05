#include "Student_info.h"

using std::istream;
using std::vector;

bool compare(const Student_info& s1, const Student_info& s2) {
    return s1.name < s2.name;
}

istream& read(istream& is, Student_info& s) {
    is >> s.name >> s.midterm >> s.final;

    read_hw(is, s.homework);
    return is;
}

istream& read_hw(istream& is, vector<double>& homework) {
    if(is) {
        //removing anything stored in homework before
        homework.clear();
        
        double x;

        while(is >> x) {
            homework.push_back(x);
        }

        //clear the input stream so that next student homework can be read
        is.clear();
    }
}
