#include<vector>
#include<algorithm>
#include<stdexcept>

using std::vector;
using std::domain_error;

double median(vector<double> vec) {
       if(vec.size() == 0) throw domain_error("median of empty vector can't be found");
       typedef vector<double>::size_type vec_sz;
       vec_sz size = vec.size();
       vec_sz mid = size /2;

       sort(vec.begin(), vec.end());
       return size % 2 == 0? (vec[mid - 1] + vec[mid]) /2: vec[mid];

}
