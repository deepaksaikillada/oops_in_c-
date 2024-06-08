// ![alt text](image-4.png)

/*
2. Multiple Inheritance: Multiple Inheritance is a feature of C++ where a 
                        class can inherit from more than one class. 
                    i.e one subclass is inherited from more than one base class.
*/

// C++ program to explain 
// multiple inheritance
#include<iostream>
using namespace std;
#define endl '\n'

// base class
class vehicle{
    public:
    vehicle(){
        cout<<"this is vehicle"<<endl;
    }
};
// second base class
class fourwheeler{
    public:
    fourwheeler(){
        cout<<"objects with 4 wheels are vehicles"<<endl;
    }
};
// sub class derived from two base classes
class car: public vehicle, public fourwheeler{
    public:
    car(){
        cout<<"car has 4 wheels"<<endl;
    }
};
// main function
int main(){
    // Creating object of sub class will
    // invoke the constructor of base classes
    car obj;
    // obj.func1(); //"car::func1" is ambiguous
    // obj.func2();
    // obj.func3();    
    return 0;
}