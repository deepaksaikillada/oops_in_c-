#include<iostream>
using namespace std;
//getters and setters used in this case;
//while data members are in private
//and we want to set/get the data/hero.health from the hero class but health is private data member
// so we can't access it from the outside of the class
// so we use getter and setters so this is came into the picture
class hero{
    private:
    int health;
    char level;
    public:
    void print(){
        cout<<level<<endl;
    }
    int gethealth(){
        return health;
    }
    char getlevel(){
        return level;
    }
    void sethealth(int h){
        health=h;
    }
    void setlevel(char ch){
        level=ch;
    }
};

int main(){

    hero h1;
    // h1.health=70; //here health &level is private so we can't access it from the outside hero class
    // h1.level='A';
    // //so here the getter and setter came into picture;
    //
    //use setter
    h1.sethealth(70); //first we have to set the data 
    h1.setlevel('A');

    //use getter
    cout<<"Health is: "<<h1.gethealth()<<endl; // and then we have to get the data
    cout<<"Level is: "<<h1.getlevel()<<endl;
    return 0;

}