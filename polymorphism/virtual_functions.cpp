// run time polymorphism


/*
B. Virtual Function:-
        A virtual function is a member function that is declared in the base class using the 
        keyword virtual and is re-defined (Overridden) in the derived class.

Some Key Points About Virtual Functions:
    1. Virtual functions are Dynamic in nature. 
    2. They are defined by inserting the keyword “virtual” inside a base class 
        and are always declared with a base class and overridden in a child class
    3. A virtual function is called during Runtime
Below is the C++ program to demonstrate virtual function:
*/

// C++ Program to demonstrate
// the Virtual Function
#include <iostream>
using namespace std;

// Declaring a Base class
class GFG_Base {

public:
	// virtual function
	virtual void display()
	{
		cout << "Called virtual Base Class function"
			<< "\n\n";
	}

	void print()
	{
		cout << "Called GFG_Base print function"
			<< "\n\n";
	}
};

// Declaring a Child Class
class GFG_Child : public GFG_Base {

public:
	void display()
	{
		cout << "Called GFG_Child Display Function"
			<< "\n\n";
	}

	void print()
	{
		cout << "Called GFG_Child print Function"
			<< "\n\n";
	}
};

// Driver code
int main()
{
	// Create a reference of class GFG_Base
	GFG_Base* base;

	GFG_Child child;

	base = &child;

	// This will call the virtual function
	base->GFG_Base::display(); //output for this line:- Called virtual Base Class function
	base->display();  //output for this line:- Called GFG_Child Display Function


	// this will call the non-virtual function
	base->print();
}
/*
Output:-
Called virtual Base Class function

Called GFG_Base print function
*/

/*
Example 2:

C++
*/

// C++ program for virtual function overriding
#include <bits/stdc++.h>
using namespace std;

class base {
public:
	virtual void print()
	{
		cout << "print base class" << endl;
	}

	void show() { cout << "show base class" << endl; }
};

class derived : public base {
public:
	// print () is already virtual function in
	// derived class, we could also declared as
	// virtual void print () explicitly
	void print() { cout << "print derived class" << endl; }

	void show() { cout << "show derived class" << endl; }
};

// Driver code
int main()
{
	base* bptr;
	derived d;
	bptr = &d;

	// Virtual function, binded at
	// runtime (Runtime polymorphism)
	bptr->print();

	// Non-virtual function, binded
	// at compile time
	bptr->show();

	return 0;
}
/*
Output:-
print derived class
show base class
*/
