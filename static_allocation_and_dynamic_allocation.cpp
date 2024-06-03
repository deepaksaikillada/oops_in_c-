#include<iostream>
using namespace std;

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
    //static allocation
    hero h1;
    h1.sethealth(80); //first we have to set the data 
    h1.setlevel('B');
    cout<<"Health is: "<<h1.gethealth()<<endl; // and then we have to get the data
    cout<<"Level is: "<<h1.getlevel()<<endl;
    //dynamic allocation
    hero *b=new hero;
    (*b).sethealth(70);//first we have to set the data 
    (*b).setlevel('A');
    cout<<"Health is: "<<(*b).gethealth()<<endl; // and then we have to get the data
    cout<<"Level is: "<<(*b).getlevel()<<endl;

    //or

    b->sethealth(70);//first we have to set the data 
    b->setlevel('A');
    cout<<"Health is: "<<b->gethealth()<<endl; // and then we have to get the data
    cout<<"Level is: "<<b->getlevel()<<endl;



    return 0;
}