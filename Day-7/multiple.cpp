#include <iostream>
using namespace std;

class Vehicle {
protected:
    string brand;

public:
    Vehicle(string brand) {
        this->brand = brand;
    }

    void startEngine() {
        cout << "Engine Started" << endl;
    }

    void stopEngine() {
        cout << "Engine Stopped" << endl;
    }

    void displayInfo() {
        cout << "Brand: " << brand << endl;
    }
};

class Car : public Vehicle {
public:
    Car(string brand) : Vehicle(brand) {}

    void startEngine() {
        cout << brand << " Car Engine Started" << endl;
    }

    void stopEngine() {
        cout << brand << " Car Engine Stopped" << endl;
    }
};

int main() {

    Car mycar("Maserati");

    mycar.displayInfo();
    mycar.startEngine();
    mycar.stopEngine();

    return 0;
}