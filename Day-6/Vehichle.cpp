#include<iostream>
using namespace std;

class Vehichle{
    public:
    string engine;
    int year;
    string name;
    void display(){
        cout<<"The Engine is:"<<engine<<endl;
        cout<<"the Model Year is:"<<year<<endl;
        cout<<"the name of the car is:"<<name<<endl;
    }
};

int main(){
    Vehichle s;
    s.engine = "Inline 6";
    s.year = 2016;
    s.name = "BMW 320d";

    s.display();
    return 0;
}