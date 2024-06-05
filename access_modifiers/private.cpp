// if public/private/protected access modifiers are not defined for a class then

//by default data members/ properties are in private class
// so we can not access it from outside the defined class;


//access properties / data members :- using "." dot operator


//PRIVATE CLASS

//private: data members/member functions are accessed by inside class only
// accessed from any place inside class only, we can-not accessed by outside/child class
//
#include<iostream>
using namespace std;

class hero{
    
    //properties
    //// char name[100];  
    // by default access modifiers are private 
    public:
    int health;  

    private:   
    char level;             

    //behaviours/functions/methods
    void attack(){
        cout<<level<<endl;  //level is private member we can access it from inside the class
    }

    //by default the above properties and member functions are private
};

int main(){

    //creation of object h1 with hero class/data type
    hero h1;
    cout<<"health is : "<<h1.health<<endl;  // by default the (data members)/(properties)/members/functions are private in the class, so we can't access it outside the class
    cout<<"level is : "<<h1.level<<endl; 
    //here level is private data member so we cannot access it from outside class
    cout<<"Attack power is : ";
    //here attack is private member function so we cannot access it from outside class
    h1.attack(); 


    /*
    error: 'int hero::health' is private within this context
     cout<<"health"<<h1.health<<endl;  //
                        ^~~~~~
access_properties_in_class.cpp:12:9: note: declared private here
     int health;
         ^~~~~~
    */
    return 0;
}

/*
we are getting this error
output:
private.cpp: In function 'int main()':
private.cpp:42:29: error: 'char hero::level' is private within this context
     cout<<"level is : "<<h1.level<<endl;
                             ^~~~~
private.cpp:27:10: note: declared private here
     char level;
          ^~~~~
private.cpp:46:15: error: 'void hero::attack()' is private within this context
     h1.attack();
               ^
private.cpp:30:10: note: declared private here
     void attack(){
          ^~~~~~
*/