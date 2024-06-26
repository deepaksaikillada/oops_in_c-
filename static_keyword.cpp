//static data member
//
//using static keyword .. static int timetocomplete
//..static data member which belong to class..
// to access the static data member we don't need to create an object
//
//static data member only initialise only once

//we should have initialise the static data member outside the class

//initialise the static data memeber using scope resolution operator
///
//scope resolution operator(::) by using this we can access outside the class

#include<iostream>
#include<cstring>
using namespace std;
class hero{
    private:
    int health;
    char level;
    public:
    static int timetocomplete;  //static data member
    char *name;
    //constrcutor is with the same name as class name
    //default constructor
    // hero(){
    //     //default constructor called;
    // }
    hero(){
        cout<<"default constructor called"<<endl;
        name=new char[100];
    }
    //paramterised constructor
    hero(int health){
        this->health=health;
    }
    hero(int health,char level){
        this->level=level;
        this->health=health;
    }

    //copy constructor

    /*
    In copy constructor , object is passed by reference because , if we pass by value then a copy of object will be created which calls the same constructor again and this leads to infinite loop
    */

    //here we pass by reference (with &) to escape from the infinite loop , if we pass by value like below commented one then we trap into the infinite loop 

    // hero(hero temp){ //we get error because we pass by value

    // }

    hero(hero& temp){
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        cout<<"Copy constructor called"<<endl;
        this->name=ch;
        this->health=temp.health;
        this->level=temp.level;
    }

    //
    void print(){
        cout<<endl;
        cout<<" [ name-> "<<name<<",,";
        cout<<"health-> "<<health<<",,";
        cout<<"level-> "<<level<<" ]"<<endl;
        cout<<endl;
    }
    void sethealth(int health){
        this->health=health;
    }
    void setlevel(char level){
        this->level=level;
    }

    void setname(char name[]){
        strcpy(this->name,name);
        // this->name=name;
    }

    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }

    ~hero(){ //destructor declaration
        cout<<"destructor called"<<endl;
    }
};

//initialise the static data memeber using scope resolution operator
int hero::timetocomplete=5; //scope resolution operator(::) by using this we can access outside the class
//

int main(){
    cout<<hero::timetocomplete<<endl; // to access the static data member we don't need to create an object
    hero a;
    cout<<a.timetocomplete<<endl;  //output:5 prints

    //see now
    hero b;
    b.timetocomplete=10;    //static data member only initialise only once 
                        // so here we changing the static data memeber 
                        // so it will be carried to the next 
                        // becuase the static data member allocated/declared only once through out the program, so if we change then the changed value is carried to the next call ,  so if we call the function several times, the static data member should be initialised only once
    cout<<hero::timetocomplete<<endl; //prints 10
    cout<<a.timetocomplete<<endl; //prints 10
    cout<<b.timetocomplete<<endl; // prints 10
    return 0;       
}

/*
5
default constructor called
5
default constructor called
10
10
destructor called
destructor called
*/