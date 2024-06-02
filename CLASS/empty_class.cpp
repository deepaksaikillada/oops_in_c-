//empty class:- means there is no properties;

// class:-  blue print of object
// object:- instance of class
// object:- is :- entity :- 
//it has 
//1. properties(variables) and 2. behaviours(methods/functions)

#include<iostream>
using namespace std;

class hero{
    //empty class:- means there is no properties;

    //properties
    // char name[100];  //here char,int..etc are inbuilt data types
    // int health;      // similarly class is user-defined data type by our own
    // char level;             

    //behaviours/functions/methods

};

int main(){

    //creation of object h1 with hero class/data type
    hero h1;
    cout<<"size of : "<<sizeof(h1)<<endl; //output:- 1 size of(h1)=size of empty class : 1
    return 0;
}