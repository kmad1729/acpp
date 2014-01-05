#include <algorithm>
#include <stdexcept>
#include <vector>

using std::domain_error;
using std::vector;

double median(vector<double> vec) {
    typedef vector<double>::size_type vec_sz;
    if(vec.size() == 0) throw domain_error("median of empty vector");

    vec_sz size = vec.size();
    vec_sz mid = size / 2;
    sort(vec.begin(), vec.end());

    return size % 2 == 0? (vec[mid -1] + vec[mid]) / 2: vec[mid];
}
