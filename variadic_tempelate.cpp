#include <iostream>
#include <cmath>
using namespace std;
template <typename T>
struct AreEqual {
static bool check(const T& a, const T& b) {
return a == b;
 }
};
template <>
struct AreEqual<float> {
static bool check(const float& a, const float& b) {
 const float delta = 0.1f;
return abs(a - b) <= delta;
 }
};
template <>
struct AreEqual<double> {
    static bool check(const double& a, const double& b) {
        const double delta = 0.1;
return abs(a - b) <= delta;
    }
};

//base case 
template <typename T>
bool are_all_equal(const T& val) {
return true;
}
template <typename T, typename U, typename... Args>
bool are_all_equal(const T& val, const U& next, const Args&... args) {
    return AreEqual<T>::check(val, next) && are_all_equal(next, args...);
}
int main() {

bool result1 =are_all_equal(1, 1, 1, 1);  
bool result2 =are_all_equal(1.0, 1.1, 1.2);  
bool result3 = are_all_equal(1.0f, 1.2f, 1.3f);  

cout<< "Result 1: " <<boolalpha<<result1<<endl;
cout<< "Result 2: " <<boolalpha<<result2<<endl;
cout<< "Result 3: " <<boolalpha<<result3<<endl;
 return 0;
}