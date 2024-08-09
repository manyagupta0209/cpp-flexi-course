#include<iostream>
using namespace std;
void staticExample(){
    static int z=0;
    z++;
    cout<<"the value of z ="<<z<<endl;
}
int main(){
    staticExample();
    staticExample();
}