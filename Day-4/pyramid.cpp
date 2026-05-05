#include<iostream>
using namespace std;

int main(){
    int a;
    cout<<"Number of rows:";
    cin>>a;

    for(int i=1;i<=a;i++){
        for (int j = a; i > i; j--)
        {
            cout<<" ";
        }
        for (int k = 1; k <= i; k++)
        {
            cout<<" *";
        }
        cout<<endl;
        
        
    }
    return 0;
}