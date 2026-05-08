#include<iostream>
using namespace std;

class ATM{
    private:
    float balance;

    public:
    ATM(float balance){
        this->balance = balance;
    }

    void Withdraw(float amount){
        if (amount>balance)
        {
            cout<<"Insufficient Balance :"<<endl;
        }
        else{
            balance -= amount;
            cout<<"Amount Withdrawn :"<<amount<<endl;
        }
    }
    
    void showBalance(){
        cout<<"Current Balance :"<<balance<<endl;
    }
};

int main(){
    ATM a(4000);
    a.showBalance();
    a.Withdraw(2520.5);
    a.showBalance();

    return 0;
} 