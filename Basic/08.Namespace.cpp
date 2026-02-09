What is a Namespace ?
   A namespace is used to group related names.
   It helps avoid name conflicts.

Why Namespace is needed::==>>
   Same name can exist in different namespaces
   Prevents confusion in large programs

Using namespace std::=>>

#include <iostream>
using namespace std;

int main() {
    cout << "Hello C++";
    return 0;
}
Using std:: without using::=>>

#include <iostream>

int main() {
    std::cout << "Hello";
    return 0;
}


Custom Namespace::=>>

namespace mySpace {
    int x = 10;
}

int main() {
    cout << mySpace::x;
}
