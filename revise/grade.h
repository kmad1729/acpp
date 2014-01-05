#ifndef GUARD_Grade_h
#define GUARD_Grade_h

#include "Student_info.h"
#include <vector>

//grade formula
double grade(double, double, double);

//calculate homework
double grade(double, double, const std::vector<double>&);

//calculate from struct
double grade(const Student_info&);

#endif
