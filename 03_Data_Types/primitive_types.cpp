PRIMITIVE DATA TYPES IN C++::->>  Primitive data types are basic built-in 
                                   types used to store simple values.
Data            Type	        Use        	Example
int           	Whole         numbers	    int a = 10;
float	          Decimal       number	    float b = 5.5;
double	        Large         decimal	    double d = 12.3456;
char	          Single        character	  char c = 'A';
bool	          True/False	  bool         x = true;
void	          No            value	      void display()

// int    -> stores whole numbers
// float  -> stores decimal numbers (less precision)
// double -> stores decimal numbers (more precision)
// char   -> stores single character
// bool   -> stores true or false



#include <iostream>
using namespace std;

int main() {

    // 1. Integer Type
    int age = 20;
    cout << "Age: " << age << endl;

    // 2. Float Type
    float price = 99.5;
    cout << "Price: " << price << endl;

    // 3. Double Type
    double pi = 3.14159;
    cout << "PI: " << pi << endl;

    // 4. Character Type
    char grade = 'A';
    cout << "Grade: " << grade << endl;

    // 5. Boolean Type
    bool isPassed = true;
    cout << "Passed: " << isPassed << endl;

    return 0;
}


