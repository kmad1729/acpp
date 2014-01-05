#include<stdexcept>
#include<vector>
#include "median.h"
#include "Student_info.h"
#include "grade.h"

using std::domain_error; using std::vector;

double grade(double midterm, double final, double homework) {
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double grade(double midterm, double final, const vector<double>& homework) {
    if(homework.size() == 0) throw domain_error("homework vector cannot be empty");
    return grade(midterm, final, median(homework));
}

double grade(Student_info &s) {
    return grade(s.midterm, s.final, s.homework);
}
