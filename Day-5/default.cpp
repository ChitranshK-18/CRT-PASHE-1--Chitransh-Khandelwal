#include<iostream>
using namespace std;


int var(int x=6){
    return x;
}

int main(){
    int x;
    cout<<"Product is:"<<var()<<endl;

    return 0;
}