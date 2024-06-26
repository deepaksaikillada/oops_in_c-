//

/*
B. Operator Overloading
C++ has the ability to provide the operators with a special meaning for a data type, 
this ability is known as operator overloading. For example,
 we can make use of the addition operator (+) for string class to concatenate two strings.
  We know that the task of this operator is to add two operands. So a single operator ‘+’, 
  when placed between integer operands, adds them and when placed between string operands, 
  concatenates them. 

Below is the C++ program to demonstrate operator overloading:


*/

// C++ program to demonstrate
// Operator Overloading or
// Compile-Time Polymorphism
// #include <iostream>
// using namespace std;

// class Complex {
// private:
// 	int real, imag;

// public:
// 	Complex(int r = 0, int i = 0)
// 	{
// 		real = r;
// 		imag = i;
// 	}

// 	// This is automatically called
// 	// when '+' is used with between
// 	// two Complex objects
// 	Complex operator+(Complex const& obj)
// 	{
// 		Complex res;
// 		res.real = real + obj.real;
// 		res.imag = imag + obj.imag;
// 		return res;
// 	}
// 	void print() { cout << real << " + i" << imag << endl; }
// };

// // Driver code
// int main()
// {
// 	Complex c1(10, 5), c2(2, 4);

// 	// An example call to "operator+"
// 	Complex c3 = c1 + c2;
// 	c3.print();
// }

/*
Output
12 + i9
*/
/*
Explanation:  In the above example, the operator ‘+’ is overloaded. 
Usually, this operator is used to add two numbers (integers or floating point numbers), 
but here the operator is made to perform the addition of two imaginary or complex numbers.
*/

#include<iostream>
using namespace std;

class complex{
	private:

	int real,imag;
	
	public:

	complex(int r=0,int i=0){
		real=r;
		imag=i;
	}
//operator_overloading_syntax.png
	void operator+(complex & obj){
		// complex res;
		// res.real=real+obj.real;
		// res.imag=imag+obj.imag;
		// return res;
		int real=this->real+obj.real;
		int imag=this->imag+obj.imag;
				cout << real << " + i" << imag << endl;

	}
	void print(){
		cout << real << " + i" << imag << endl;
	}
};

int main(){
	complex obj1(10,5);
	complex obj2(2,4);
	// complex c3=obj1+obj2;
	obj1+obj2; //here obj1 is current object we can access using this pointer + 
	//        / obj2 is input argument in syntax
	// c3.print();
	return 0;
}