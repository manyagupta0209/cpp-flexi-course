#include<iostream>
#include<string>
using namespace std;
int main(){
    // cout<<"hello world";
    cout<< "enter your name"<<endl;
    string a;
    // cin>>a; 
    getline(cin, a);
    cout<<"hello "<<a;
    return 0;
}