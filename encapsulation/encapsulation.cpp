#include<iostream>
using namespace std;

class student{
    private:
        string name;
        int age;

    public:
        void setage(int age){
            this->age=age;
        }
        int getage(){
            return this->age;
        }
};

int main(){

    student first;
    first.setage(50);
    cout<<first.getage()<<endl;
    cout<<"sab sahi chal rahe hain"<<endl;
    return 0;
}