#include<iostream>
using namespace std;
int main(){
    //for Flyod Series
    int number;
    cout<<"enter the number"<<endl;
    cin>>number;
    int count = 1;
    for(int i=0;i<number;i++){
        for(int j=0; j<=i ;j++){
        cout<<count;
        count = count +1;
        cout<<" ";
    }
    cout<<endl;
        }

    //for same number in each row
    int count2=1;
    for(int i=0;i<number;i++){
        for(int j=0; j<=i ;j++){
        cout<<count2;
        cout<<" ";
    }
    count2=count2+1;
    cout<<endl;
        }
    return 0;
}