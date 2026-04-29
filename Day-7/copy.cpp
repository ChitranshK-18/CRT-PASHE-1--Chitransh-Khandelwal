#include<iostream>
using namespace std;

class Cricketers{
    string name;
    int runs;

    public:

    Cricketers(string name, int r){
        this->name = name;
        runs = r;
    }

    Cricketers(const Cricketers &c2){
        this->name = name;
        this->runs = runs;
    }

    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
    }
};

int main(){
    Cricketers c1("Rohit", 13000);
    Cricketers c2(c1);
    c1.show();
    c2.show();

}