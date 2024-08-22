#include<iostream>
using namespace std;
int main(){
    //----input for year----
    int year;
    cout<<"enter a year"<<endl;
    cin>>year;
    //---Check validity of the year---
    //---cin.fail-->User has input correct year and not some string value---
    if(cin.fail()){
        cout<<"invalid input";
    }
    else{
        //---condition for leap year---
        if((year%4==0 && year%100!=0) || (year%400==0)){
        cout<<year<<" is a leap year";
        }
        else{
        cout<<year<<" is not a leap year";
        }
    }
    return 0;
}