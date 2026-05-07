#include<iostream>
using namespace std;

class Player {
public:
    string name;
    int age;
};

class Cricketer : public Player {
public:
    void show() {
        cout << "Cricketer Name: " << name << endl;
        cout << "Cricketer Age: " << age << endl;
    }
};

class Footballer : public Player {
public:
    void show() {
        cout << "Footballer Name: " << name << endl;
        cout << "Footballer Age: " << age << endl;
    }
};

int main() {

    Cricketer c;
    c.name = "Virat Kohli";
    c.age = 38;

    Footballer f;
    f.name = "Messi";
    f.age = 40;

    c.show();
    cout << endl;

    f.show();

    return 0;
}