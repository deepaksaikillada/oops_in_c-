// C++ Implementation to show that a derived class
// doesn’t inherit access to private data members.
// However, it does inherit a full parent object.

/*
Modes of Inheritance: There are 3 modes of inheritance.

1. Public Mode: If we derive a subclass from a public base class. Then the public member of the base class will become public in the derived class and protected members of the base class will become protected in the derived class.
2. Protected Mode: If we derive a subclass from a Protected base class. Then both public members and protected members of the base class will become protected in the derived class.
3. Private Mode: If we derive a subclass from a Private base class. Then both public members and protected members of the base class will become Private in the derived class.
Note: The private members in the base class cannot be directly accessed in the derived class, while protected members can be directly accessed. For example, Classes B, C, and D all contain the variables x, y, and z in the below example. It is just a question of access. 
*/

/*
** inheritance/image-2.png **
*/
// class A {
// public:
//     int x;

// protected:
//     int y;

// private:
//     int z;
// };

// class B : public A {
//     // x is public
//     // y is protected
//     // z is not accessible from B
// };

// class C : protected A {
//     // x is protected
//     // y is protected
//     // z is not accessible from C
// };

// class D : private A // 'private' is default for classes
// {
//     // x is private
//     // y is private
//     // z is not accessible from D
// };

#include<iostream>
using namespace std;

class human{
    private:

    public:
    int height;
    int weight;
    int age;

    int getage(){
        return this->age;
    }

    void setweight(int w){
        this->weight=w;
    }
};

class male: public human{
    private:

    public:
    string color;
    
    void sleep(){
        cout<<"male sleeping"<<endl;
    }
};

int main(){
    male object1;
    cout<<object1.age<<endl;

    cout<<object1.weight<<endl;
    
    cout<<object1.height<<endl;
    
    cout<<object1.color<<endl;
    
    object1.setweight(84);
    
    cout<<object1.weight<<endl;
    
    object1.sleep();

    return 0;
}
/*
output:
258432052  //some garbage value
1988878704 //some garbage value
6422476 //some garbage value
        .//some garbage value for string color
84
male sleeping
*/