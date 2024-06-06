//

#include<iostream>
using namespace std;

class hero{
    private:
    int health;
    char level;

    public:
    void print(){
        cout<<"health-> "<<health<<",,";
        cout<<"level-> "<<level<<endl;
    }
    void sethealth(int health){
        this->health=health;
    }
    void setlevel(char level){
        this->level=level;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    //constrcutor is with the same name as class name
    //default constructor
    // hero(){
    //     //default constructor called;
    // }
    hero(){
        cout<<"default constructor called"<<endl;
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
        cout<<"Copy constructor called"<<endl;
        this->health=temp.health;
        this->level=temp.level;
    }
};

int main(){
    hero ramesh(70,'W');
    //
    ramesh.print();
    hero suresh(ramesh); // by creating a new object with help of copying the contents of existing object 
    // by default the copy constructor is created and called;
    suresh.print();
    return 0;
}

/*
output:
health-> 70,,level-> W
Copy constructor called
health-> 70,,level-> W
*/