// ========================================
// endl vs \n in C++
// ========================================

#include <iostream>
using namespace std;

int main() {

    cout << "Hello World" << endl;
    cout << "Welcome to C++" << endl;

    cout << "Hello World\n";
    cout << "Welcome to C++\n";

    return 0;
}


| endl                              | \n            |
| --------------------------------- | ------------- |
| New line + buffer flush           | Only new line |
| Slower                            | Faster        |
| Used when immediate output needed | Used normally |
|  low                              | fast          |

  
