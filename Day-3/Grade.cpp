#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the percentage";
    cin>>a;

    if(a>90){
    cout<<"Grade A";
    }
    else if(a>=80 && a<=89){
    cout<<"Grade B";
    }
    else if(a>=70 && a<=79){
        cout<<"Grade C";
    }
    return 0;
}
