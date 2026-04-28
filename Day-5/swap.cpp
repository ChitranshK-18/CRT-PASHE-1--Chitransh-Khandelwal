#include<iostream>
using namespace std;

int main(){
    int x,y;
    x=8;
    y=70;
    int temp;
    temp *ptr = &x;
    temp *ptr = &y;
    x=temp;
    temp=y;
}