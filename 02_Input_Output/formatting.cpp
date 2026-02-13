// ========================================
// OUTPUT FORMATTING IN C++
// ========================================

#include <iostream>
#include <iomanip>   // required for formatting
using namespace std;

int main() {

    double num = 123.456789;

    // 1️⃣ Set decimal precision
    cout << fixed << setprecision(2);
    cout << "Fixed with 2 decimal: " << num << endl;

    // 2️⃣ Width formatting
    cout << setw(10) << 100 << endl;

    // 3️⃣ Left alignment
    cout << left << setw(10) << 50 << endl;

    // 4️⃣ Right alignment
    cout << right << setw(10) << 75 << endl;

    return 0;
}

🔹 Important Formatting Functions
1️⃣ fixed
Decimal number ko fixed format me dikhata hai
2️⃣ setprecision(n)
Decimal ke baad kitne digits chahiye
Example:
setprecision(2)
3️⃣ setw(n)
Output ki width set karta hai
Example:
setw(10)
4️⃣ left and right
Text alignment control karta hai
