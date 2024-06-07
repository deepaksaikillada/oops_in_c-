//"=" //"=" is the copy assignment operator 
    //which copies the right side values to the left side;

/*
Shallow copy:
Shares memory resources (pointers) between the original and copied objects.
Changes made to one object affect the other.
*/    
    //use default copy constructor; 
    //default copy constructor do shallow copy
    // shallow copy / default copy constructor is 
    // if we change the original object's name then the copy objected name also changes , i.e,created by existing original object 

// but we want deep copy :- now we dont use default copy constructed, we have to created one and in that newly created copy constructor we have to created a new character array/name which is clone/duplicate of original char array/name which is both of different addresses
// so we use created copy constructor 
// we have to create a new array which is clone of original char array/name
//don't share the memory resources
/*
Deep copy:
Clones all members (recursively, if necessary) to create a new, independent object.
No shared memory resources.
Requires explicit implementation in the copy constructor.
*/



/*
output:
default constructor called
Copy constructor called

 [ name-> Gabbar,,health-> 10,,level-> A ]


 [ name-> Babbar,,health-> 10,,level-> A ]


 [ name-> Babbar,,health-> 10,,level-> A ]


 [ name-> Babbar,,health-> 10,,level-> A ]

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
};

int main(){
    hero hero1; 
    hero1.sethealth(10); // prints default constructor called
    hero1.setlevel('A');
    char name[7]="Babbar";
    hero1.setname(name);
//
    //hero1.print(); // prints :- [ name-> Babbar,,health-> 10,,level-> A ]
    //use default copy constructor;  comment down the custom copy constructor you created above
    //default copy constructor do shallow copy
    hero hero2(hero1);
    //hero2.print(); // prints:- [ name-> Babbar,,health-> 10,,level-> A ]
    //
    hero1.name[0]='G';
    hero1.print(); // prints:- [ name-> Gabbar,,health-> 10,,level-> A ]

    //
    hero2.print(); // prints:-  [ name-> Babbar,,health-> 10,,level-> A ]

    //"=" is the copy assignment operator 
    //which copies the right side values to the left side;
    hero1=hero2; //here it copies the
    hero1.print();// prints:-  [ name-> Gabbar,,health-> 10,,level-> A ]
    hero2.print();// prints:-  [ name-> Gabbar,,health-> 10,,level-> A ]
    return 0;       
}

/*
output:
default constructor called
Copy constructor called

 [ name-> Gabbar,,health-> 10,,level-> A ]


 [ name-> Babbar,,health-> 10,,level-> A ]


 [ name-> Babbar,,health-> 10,,level-> A ]


 [ name-> Babbar,,health-> 10,,level-> A ]

*/