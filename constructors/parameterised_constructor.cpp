//constructor is with the same name as a class name
//parameterised constructor //means constructor with the arguments/parameters with same name as class


//if once parameterised constructor is created then the default constructor is not exists.. it will be deleted.
//and we get error like this .... /* no default constructor exists for class "hero" */

//then we have to declare/create objects with parameters
//because the inbuilt constructor is deleted/gone so we have to create objects with parameters
#include<iostream>
using namespace std;

class hero{
    private:

    int health;

    char level;
    
    public:
    // //default constructor//constructor :- with no arguments/no paramters
    // hero(){
    //     cout<<"Default constructor with same name as class name is called while created an object with statically or dynamically "<<endl;
    // }

    //parametrised constructor := which contains arguments/parameters
    hero(int health){
        this->health = health;  //this pointer stores the address of the current object
        /*// This works perfectly becuase even though the properties/variables is private , the methods get and set are public. Those methods are present within class so they can access properties.  
            
            //We use set and get methods to get values of private properties outside class
        */
    }
    hero(int health,char level){
        this->level=level;
        this->health=health;
    }

    void print(){
        cout<<level<<endl;
    }

    void sethealth(int h){
        health=h;
    }

    void setlevel(char ch){
        level=ch;
    }

    int gethealth(){
        return health;
    }
    
    char getlevel(){
        return level;
    }
};

int main(){
    cout<<"hi"<<endl;
    //statically allocated 
    //object created statically
    //hero ramesh; /* throws this error:- no default constructor exists for class "hero"*/
//so here by we know what
//after creating a parameterised constructors, the default constructor is not exists , it will be deleted 

    hero ramesh(10); // ramesh.hero();
    cout<<ramesh.gethealth()<<endl;
    cout<<ramesh.getlevel()<<endl; //here throws some garbage value as a character , because the hero ramesh object is created with a single parameter health , not have level argument/parameter
    ramesh.print();
    cout<<"hello"<<endl;
    //
    //

    hero suresh(20,'B');
    cout<<suresh.gethealth()<<endl;
    cout<<suresh.getlevel()<<endl;
    suresh.print();
    cout<<"hi bujji"<<endl;
    //object created dynamically
    hero *b= new hero(20);
    b->print();
    
    return 0;
}

/*
output:
hi
10
T
T
hello
20
B
B
hi bujji
└
*/