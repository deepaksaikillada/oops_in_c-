//run time polymorphism

/*
2. Runtime Polymorphism
            This type of polymorphism is achieved by Function Overriding. 
            Late binding and dynamic polymorphism are other names for runtime polymorphism.
             The function call is resolved at runtime in runtime polymorphism. 
             In contrast, with compile time polymorphism, 
the compiler determines which function call to bind to the object after deducing it at runtime.
*/

/*
* Rules for method overriding:
    1. The method of the parent class and the method of the child class must have the same name.
  2. The method of the parent class and the method of the child class must have the same parameters.
    3. It is possible through inheritance only.
*/


/*
A. Function Overriding // method overriding

Function Overriding occurs when a derived class has a definition for one of the member functions
 of the base class. That base function is said to be overridden.

function_overriding_run_time_polymorphism.png

Runtime Polymorphism with Data Members
Runtime Polymorphism cannot be achieved by data members in C++. Let’s see an example where we are accessing the field by reference variable of parent class which refers to the instance of the derived class.
*/
// C++ program for function overriding with data members
#include <bits/stdc++.h>
using namespace std;

// base class declaration.
class Animal {
public:
	string color = "Black";
};

// inheriting Animal class.
class Dog : public Animal {
public:
	string color = "Grey";
};

// Driver code
int main(void)
{
	Animal d = Dog(); // accessing the field by reference
					// variable which refers to derived
	cout << d.color;
}
/*
Output:-
Black
*/
/*
We can see that the parent class reference will always refer to the data member of the parent class.
*/

