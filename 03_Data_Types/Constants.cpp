// ========================================
// CONSTANTS IN C++
// ========================================

// A constant is a variable whose value cannot be changed.

#include <iostream>
using namespace std;

int main() {

    // 1. Using const keyword
    const int age = 25;
    cout << "Age: " << age << endl;

    // age = 30;  Error (cannot change constant)

    // 2. Using #define (Macro Constant)
    #define PI 3.14
    cout << "PI: " << PI << endl;

    return 0;
}
