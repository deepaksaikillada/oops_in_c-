//when you create a class and object then constructor and destructor created and called automatically

//as when you create our own destructor or constructor the default one will not exists


//when ever object created,
//then 1st one thing is called i.e, that is default constructor will be automatically called
//default constructor will be called automatically when an object is created

//when you created and write a class
// then by default a constructor is created by the class name

//default constructor properties
//1. it is invoked when object is created
//2. no return type // it doesnot have any return type;
//3. it doesnot contains any input parameters/(arguments) .//no input parameters//no i/p parameters

//once we write/created default constructor named with class name then the inbuilt default constructor will be removed automatically 
// and this default constructor that you created will be called.

#include<iostream>
using namespace std;

class hero{
    private:
    
    int health;
    char level;
    
    public:
    hero(){
        cout<<"Default constructor with same name as class name is called while created an object with statically or dynamically "<<endl;
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
    hero ramesh; // ramesh.hero();

    cout<<"hello"<<endl;

    //object created dynamically
    hero *b= new hero;
    
    return 0;
}

/*
output:-
hi
Default constructor with same name as class name is called while created an object with statically or dynamically
hello
Default constructor with same name as class name is called while created an object with statically or dynamically
*/