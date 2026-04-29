#include<iostream>
using namespace std;

int recursive(int a){
    if(a == 0){
    return 0;
}    
    return(a % 10) + recursive(a/10);
}

int main(){
    int b;
    cin>>b;
    cout<<"Sum of digits "<<b<<" is:"<<recursive(b)<<endl;
    return 0;
}