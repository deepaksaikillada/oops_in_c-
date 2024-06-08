// ![alt text](image-5.png)

/*
3. Multilevel Inheritance: In this type of inheritance, a derived class is 
                            created from another derived class.
*/

// C++ program to explain 
// multi level inheritance
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
// first sub_class derived from class vehicle
class fourwheeler : public vehicle{
    public:
    fourwheeler(){
        cout<<"objects with 4 wheels are vehicles"<<endl;
    }
};
// sub class derived from the derived base class fourWheeler
class car : public fourwheeler{
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
    // obj.func1();
    // obj.func2();
    // obj.func3();    
    return 0;
}