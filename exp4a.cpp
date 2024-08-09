#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter the number"<<endl;
    cin>>a;
    if (a==0){
        cout<<a<<" is equal to 0";
    }
    else if (a>0){
        cout<<a<<" is greater than 0";
    }
    else{
        cout<<a<<" is less than 0";
    }
    return 0;
}