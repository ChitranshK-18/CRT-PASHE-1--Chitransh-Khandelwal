#include<iostream>
using namespace std;

class Area{
    public:

    int length, width, side;
    float radius;

    Area(int length,int width){
        this->length= length;
        this->width= width;
        cout<<"Area of Rectangle"<<length*width<<endl;

    }

};

int main(){
    Area s;


    return 0;
}