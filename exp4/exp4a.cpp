#include<iostream>
using namespace std;
int main(){
    //----Take Input from the User----
    int a,b;
    cout<<"enter the first number= "; 
    cin>>a;
    cout<<"enter the second number= ";
    cin>>b;
    //----Bitwise AND----
    cout<<"Bitwise AND= "<<(a&b)<<endl;
    //----Bitwise OR-----
    cout<<"Bitwise OR= "<<(a|b)<<endl;
    //----Bitwise XOR----
    cout<<"Bitwise XOR= "<<(a^b)<<endl;
    //----Bitwise NOT----
    cout<<"Bitwise NOT= "<<(~a)<<endl;
    //----Left shift-----
    cout<<"Left Shift= "<<(a<<1)<<endl;
    //----Right shift----
    cout<<"Right Shift= "<<(a>>1)<<endl;
    return 0;
}