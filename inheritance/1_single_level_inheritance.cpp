// ![alt text](image-3.png)

/*
1. Single Inheritance: In single inheritance, a class is allowed to inherit from 
                    only one class. i.e. one subclass is inherited by one base 
                    class only.

*/
// C++ program to explain 
// Single level inheritance
#include<iostream>
using namespace std;


// base class
class vehicle{
    public:
    vehicle(){
        cout<<"this is vehicle"<<endl;
    }
};
// sub class derived from a single base classes
class car : public vehicle{
    public:
    car(){
        cout<<"this is a car"<<endl;
    }
};
// main function
int main(){
    // Creating object of sub class will
    // invoke the constructor of base classes
    car obj;
    // obj.func1();
    // obj.func2();
    return 0;
}