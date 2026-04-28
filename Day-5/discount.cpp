#include<iostream>
using namespace std;

void applyDiscount(float &bill) {
    bill = bill - (0.10 * bill);  
}

int main() {
    float amount = 2800;

    applyDiscount(amount);

    cout << "Final bill: " << amount << endl;

    return 0;
}