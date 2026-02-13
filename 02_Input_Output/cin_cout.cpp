// ========================================
// INPUT AND OUTPUT IN C++
// ========================================

// cin  -> used to take input from user
// cout -> used to display output

#include <iostream>
using namespace std;

int main() {

    int age;
    string name;

    // Taking input
    cout << "Enter your name: ";
    cin >> name;

    cout << "Enter your age: ";
    cin >> age;

    // Displaying output
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;

    return 0;
}



🔹 Important Operators

<<  → Insertion operator (Output)
>>  → Extraction operator (Input)


note:->> 
cin >> name;
       Space ke baad input stop ho jata hai.


getline():->>if we want to take a full sentance with white spaces then we use getline() 
syntax:->
     getline(cin,variable_name )

  
cin >> age;
cin.ignore();      // removes leftover newline
getline(cin, name);











