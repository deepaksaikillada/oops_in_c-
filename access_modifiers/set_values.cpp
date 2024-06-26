
#include<iostream>
using namespace std;

class hero{
    
    //properties
    //// char name[100];  
    // by default access modifiers are private 
    public:   
    int health;  
    char level;             

    //behaviours/functions/methods
    
    // void attack(){
    //     cout<<1*2<<endl;
    // }

    //by default the above properties and member functions are private
};

int main(){

    //creation of object h1 with hero class/data type
    hero h1;
    // cout<<"Health is: "<<h1.health<<endl; //OUT-PUT IS garbage value;
    // cout<<"Level is: "<<h1.level<<endl; // output is garbage value;


    h1.health=70;  //if we set the values of health and level then it prints the same as output
    h1.level='A';
    cout<<"Health is: "<<h1.health<<endl;  //output is 70
    cout<<"Level is: "<<h1.level<<endl;    //output is A


    // cout<<"health is : "<<h1.health<<endl;  // by default the (data members)/(properties)/members/functions are private in the class; so we can't access it outside the class
    // cout<<"Attack power is : ";
    // h1.attack(); 


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
output:
Health is: 70
Level is: A
*/