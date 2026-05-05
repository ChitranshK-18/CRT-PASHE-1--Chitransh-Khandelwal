#include<iostream>
using namespace std;

int x=5;
int y=7;

int var(int x, int y){
    return x, y;
}

int main(){
    int z;
    z = x*y;
    cout<<var<<"Product is:"<<z<<endl;

    return 0;
}