//when you create a class and object then constructor and destructor created and called automatically

//as when you create our own destructor or constructor the default one will not exists

//we have to deallocate the memory when objects goes out of the scope

//deallocate the memory after we used

/*
destructor:- properties
    1. name is same as class name
    2. no return type
    3. no arguments/ no i/p parameters

*/

/*
    when object created 
    1. statically:- destructor is called automatically;
    2. dynamically:- destructor is called manually by us;
*/
#include<iostream>
#include<cstring>
using namespace std;
class hero{
    private:
    int health;
    char level;

    public:
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

int main(){
    //object created statically
    hero hero1; /*when object created statically:- destructor is called automatically;*/  
    //upto this line the output is:-
    /*
    default constructor called
    destructor called // this line is for statically created object
    */

    //object created dynamically
    hero *b=new hero;  /*when object is created dynamically:- destructor is called manually by us;*/
    // upto this line the output:- 
    /*
    default constructor called
    default constructor called
    destructor called // this line is for statically created object
    */

   // so now we have to free the memory that allocated dynamically
   delete b;  //we are manually deallocating the memory
   //upto this line the output is
   /*
    default constructor called
    default constructor called
    destructor called
    destructor called
   */

    return 0;       
}