#include<iostream>
using namespace std;

class university{
    private:
    int regisno = 421;

    public:
    string name;
    void getregisno(){
        cout<<"The previous Registration number is :"<<regisno<<endl;
    }
    void display(){
        cout<<"The new Registration number is :"<<regisno+1<<endl;
        cout<<"Name of the student is :"<<name<<endl;
    }
};

int main(){
    university s;
    s.getregisno();
    s.name = "Chitransh Khandelwal";
    s.display();
}