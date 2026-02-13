// ========================================
// TYPE CASTING IN C++
// ========================================

// Type casting is converting one data type into another.
Types of Type Casting
1️⃣ Implicit Casting
      Done automatically by compiler
      Smaller type → Bigger type
Example:
      int → double

2️⃣ Explicit Casting
      Done manually by programmer
      Using (type)
Example:
      (double)num
      (int)value

// When converting double to int,
// decimal part is removed (not rounded).

#include <iostream>
using namespace std;

int main() {

    // 1️⃣ Implicit Type Casting (Automatic)
    int a = 10;
    double b = a;   // int → double automatically
    cout << "Implicit casting: " << b << endl;

    // 2️⃣ Explicit Type Casting (Manual)
    double x = 5.75;
    int y = (int)x;   // double → int manually
    cout << "Explicit casting: " << y << endl;

    return 0;
}
