// if public/private/protected access modifiers are not defined for a class then

//by default data members/ properties are in private class
// so we can not access it from outside the defined class;


//access properties / data members :- using "." dot operator
#include<iostream>
using namespace std;

class hero{
    
    //properties
    //// char name[100];  
    // by default access modifiers are private 
    int health;  
    public:   
    char level;             

    //behaviours/functions/methods
    
    void attack(){
        cout<<1*2<<endl;
    }

    //by default the above properties and member functions are private
};

int main(){

    //creation of object h1 with hero class/data type
    hero h1;
    // cout<<"health is : "<<h1.health<<endl;  // by default the (data members)/(properties)/members/functions are private in the class; so we can't access it outside the class
    cout<<"Attack power is : ";
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