#include <iostream>
using namespace std;
template <int N>

struct Factorial {
static const int value = N * Factorial<N - 1>::value;
};
template <>
struct Factorial<0> {static const int value = 1;
};
int main() {
 const int result = Factorial<5>::value;
 cout << "Factorial of 5 is: " << result << std::endl;
return 0;
}

// bonus : static makes more sense than a non static member as it allows the compiler to evaluate the factorial at the compile time and result is constant i.e result in my code.
//this leads to better performance since value is knows at compile time and can be used for various optimizations and code is more efficient.
// non static instantiation might form seperste member variable causing duplication