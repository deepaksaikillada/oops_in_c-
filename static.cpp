/*
Certainly! In C++, the static keyword has different meanings depending on where it is used. Let’s explore its various uses:

Static Variables:
1. Static variables are declared using the static keyword within a function or method.
Characteristics:
1. Space for a static variable is allocated only once during the program’s lifetime (not each time the function is called).
2. The value of a static variable persists across multiple function calls.
3. It is initialized only once, even if the function is called multiple times.
*/

#include <iostream>
using namespace std;

void demo() {
    static int count = 0; // Static variable
    cout << count << " ";
    count++;
}

int main() {
    for (int i = 0; i < 5; i++)
        demo();
    return 0;
}
//Output: 0 1 2 3 4
/*
You can see in the above program that the variable count is declared static. 
So, its value is carried through the function calls. 
The variable count is not getting initialized every time the function is called.
*/


/*
Static Members of a Class:
1. When the static keyword is used with class members (variables or functions), it has the following implications:
Static data members:
1. Shared by all instances of the class.
2. Initialized only once (usually outside the class definition).
3. Cannot be modified using constructors.
Static member functions:
1. Belong to the class itself (not specific to any instance).
2. Can be called using the class name (e.g., MyClass::staticFunction()).
3. Cannot access non-static members directly.
*/


// #include <iostream>
// using namespace std;
// class MyClass {
// public:
//     static int i; // Static data member
//     static void staticFunction() {
//         cout << "Static function called." << endl;
//     }
// };

// int MyClass::i = 1; // Initialize static data member

// int main() {
//     MyClass::staticFunction(); // Call static function
//     cout << "Value of i: " << MyClass::i << endl;
//     return 0;
// }

// // output:- 
// //     Static function called.
// //     Value of i: 1
