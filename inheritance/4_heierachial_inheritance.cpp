// ![alt text](image-6.png)

/*
4. Hierarchical Inheritance: In this type of inheritance, 
                more than one subclass is inherited from a single base class. 
            i.e. more than one derived class is created from a single base class.
*/

// C++ program to explain 
// heierachial inheritance
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
// first sub class
class bus:public vehicle{
    public:
    bus(){
        cout<<"objects with 4 wheels are vehicles"<<endl;
    }
};
// second sub class
class car: public vehicle{
    public:
    car(){
        cout<<"car has 4 wheels"<<endl;
    }
};
// main function
int main(){
    // Creating object of sub class will
    // invoke the constructor of base classes
    car obj1;
    bus obj2;
    // obj.func1(); //"car::func1" is ambiguous
    // obj.func2();
    // obj.func3();    
    return 0;
}