#include "Student_info.h"
#include "median.h"
#include <vector>
#include <stdexcept>

using std::vector; using std::domain_error;

//policy
double grade(double midterm, double final, double homework) {
    return 0.2*midterm + 0.4*final + 0.4*homework;
}

//homework pol
double grade(double midterm, double final, const vector<double>& homework) {
    if (homework.size() == 0) throw domain_error("homework vector is empty");
    return grade(midterm, final, median(homework));
}


//from student_info
double grade(const Student_info& s) {
    return grade(s.midterm, s.final, s.homework);
}

