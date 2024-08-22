#include<iostream>
using namespace std;
int main(){
    int a;
    cout<<"enter\n1:Monday\n2:Tuesday\n3:Wednesday\n4:Thursday\n5:Friday\n6:Saturday\n7:Sunday"<<endl;
    cin>>a;
    //---Obtain days of the week---
    switch(a){
        case 1:
        cout<<a<<"Monday";
        break;

        case 2:
        cout<<a<<"Tuesday";
        break;

        case 3:
        cout<<a<<"Wednesday";
        break;

        case 4:
        cout<<a<<"Thursday";
        break;

        case 5:
        cout<<a<<"Friday";
        break;

        case 6:
        cout<<a<<"Saturday";
        break;

        case 7:
        cout<<a<<"Sunday";
        break;

        default:
        cout<<a<<"invalid input";
        break;
    }
    return 0;
}