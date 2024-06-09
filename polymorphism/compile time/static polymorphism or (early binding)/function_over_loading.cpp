// compile time polymorphism
//early binding
/*
1. Compile-Time Polymorphism
This type of polymorphism is achieved by function overloading or operator overloading.

A. Function Overloading
*/

/*
When there are multiple functions with the same name but different parameters, 
then the functions are said to be overloaded, hence this is known as Function Overloading.
 Functions can be overloaded by changing the number of arguments or/and changing the type of arguments.
  In simple terms, it is a feature of object-oriented programming providing many functions that have the same name but distinct parameters when numerous tasks are listed under one function name. 
  There are certain Rules of Function Overloading that should be followed while overloading a function.

Below is the C++ program to show function overloading or compile-time polymorphism:
*/

// C++ program to demonstrate
// function overloading or
// Compile-time Polymorphism
#include <bits/stdc++.h>

using namespace std;
class Geeks {
public:
	// Function with 1 int parameter
	void func(int x)
	{
		cout << "value of x is " << x << endl;
	}

	// Function with same name but
	// 1 double parameter
	void func(double x)
	{
		cout << "value of x is " << x << endl;
	}

	// Function with same name and
	// 2 int parameters
	void func(int x, int y)
	{
		cout << "value of x and y is " << x << ", " << y
			<< endl;
	}
};

// Driver code
int main()
{
	Geeks obj1;

	// Function being called depends
	// on the parameters passed
	// func() is called with int value
	obj1.func(7);

	// func() is called with double value
	obj1.func(9.132);

	// func() is called with 2 int values
	obj1.func(85, 64);
	return 0;
}

/*
Output
value of x is 7
value of x is 9.132
value of x and y is 85, 64
*/

/*
Explanation: In the above example, a single function named function func() acts differently in three different situations,
 which is a property of polymorphism.
*/

#include<iostream>
using namespace std;

class A{
    public:
    void sayhello(){
        cout<<"hello deepak"<<endl;
    }
    //function overloading means functions with same can overloaded
    //but here below sayhello() function is cannot be overloaded because 
    //for overloading we have to change the parameters/arguments in the function ,, atleast data type of arguments/parameters
    //by only changing the return type of function we cannot overloaded the function

    int sayhello(){ //throws error:- error: 'int A::sayhello()' cannot be overloaded
    //cannot overload functions distinguished by return type aloneC/C++(311)
        cout<<"hello deepak"<<endl;
    }

    int sayhello(char name){
        cout<<"hello deepak from this side - "<<name<<endl;
        return 1;
    }

    void sayhello(string name,int n){
        cout<<"hello deepak from this side is - "<<name<<" to the "<<n<<" people"<<endl;
    }
};

int main(){
    A obj1;
    obj1.sayhello();
    obj1.sayhello('g');
    obj1.sayhello("vivek",3);
    return 0;
}