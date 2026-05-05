#include<iostream>
using namespace std;

int shots(int s){
    return s*30;
}



int main(){
    int s;
    cout<<"Number of shots:"; 
    cin>>s;
    cout<<"Volume is:"<<shots(s)<<endl;

return 0;
}
