* Does overloading work with Inheritance?
Last Updated : 08 Jun, 2024
* If we have a function in base class and another function with the same name in derived class, can the base class function be called from derived class object? This is an interesting question and as an experiment, predict the output of the following C++ program: 

1. #include <iostream>
using namespace std;
class Base
{
public:
	int f(int i)
	{
		cout << "f(int): ";
		return i+3;
	}
};
class Derived : public Base
{
public:
	double f(double d)
	{
		cout << "f(double): ";
		return d+3.3;
	}
};
int main()
{
	Derived* dp = new Derived;
	cout << dp->f(3) << '\n';
	cout << dp->f(3.3) << '\n';
	delete dp;
	return 0;
}

2. The output of this program is: 

f(double): 6.3
f(double): 6.6 
Instead of the supposed output: 

f(int): 6
f(double): 6.6 

3. Overloading doesn’t work for derived class in the C++ programming language. There is no overload resolution between Base and Derived. The compiler looks into the scope of Derived, finds the single function “double f(double)” and calls it. It never disturbs the (enclosing) scope of Base. In C++, there is no overloading across scopes and derived class scopes are not an exception to this general rule. 