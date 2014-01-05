#ifndef GUARD_Student_info_h
#define GUARD_Student_info_h

#include<vector>
#include<iostream>
#include<string>

struct Student_info{
    std::string name;
    double midterm, final;
    std::vector<double> homework;
};

bool compare(const Student_info&, const Student_info&);

std::istream& read_hw(std::istream&, std::vector<double>&);
std::istream& read_Student_info(std::istream&, Student_info&);

#endif
