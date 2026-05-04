-#include<iostream>
using namespace std;

int main(){
    char x;
    cout<<"welcome to jecrc customer service...press a number:";
    cin>>x;

    switch(x){
        case'1':
        cout<<"for support";
        break;
        case'2':
        cout<<"for billing";
        break;
        case'3':
        cout<<"for technical support";
        break;
        case'4':
        cout<<"speak to an agent";
        case'0':
        cout<<"speak to an agent";
        break;

        default:
        cout<<"invalid input";
        

    }
        return 0;
}