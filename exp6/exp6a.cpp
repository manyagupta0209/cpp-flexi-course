#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number= ";
    cin>>number;
    //---prints natural numbers---
    cout<<"the natural numbers till "<<number<<" = "<<endl;
    for(int i=1;i<=number;i++){
        cout<<i<<endl;
    }
    return 0;
}