#include<iostream>
using namespace std;

class Animal{
    public:
    string name= "Leo";
    string breed = "shihtzu";
    int age = 2;

};

class dog : public Animal{
    public:
    void show(){
        cout<<"Name is :"<<name<<endl;
        cout<<"Breed is :"<<breed<<endl;
        cout<<"Age :"<<age<<endl;
    }
    
};

int main(){
    dog d;
    d.show();
}


