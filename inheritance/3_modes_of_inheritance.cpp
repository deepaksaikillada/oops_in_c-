#include<iostream>
using namespace std;
//inheritance/image-2.png 
class human{
    public:
        int weight;

    private:
        int height;
    
    protected:
        int age;

    int getage(){
        return this->age;
    }

    void setweight(int w){
        this->weight=w;
    }
};

class male: public human{
    // private:

    public:
    string color;
    
    void sleep(){
        cout<<"male sleeping"<<endl;
    }

    int getheight(){
        return this->height; /*cpp:34:22: error: 'int human::height' is private within this context
         return this->height; //
                      ^~~~~~
3_modes_of_inheritance.cpp:9:13: note: declared private here
         int height;
             ^~~~~~*/
    }

    int getweight(){
        return this->weight;
    }

    int getage(){
        return this->age;
    }
};

int main(){
    male object1;
    cout<<object1.getage();
    return 0;
}