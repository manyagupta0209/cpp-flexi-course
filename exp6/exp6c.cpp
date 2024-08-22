#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number of rows"<<endl;
    cin>>num;
    //for square
    for(int i=0; i<num;i++){
        for(int j=0;j<num;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    //for right angled triangle
    for(int i=0;i<num;i++){
        for(int j=0;j<=i;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    cout<<endl;
    //for isosceles triangle
    for(int i=0;i<num;i++){
        for(int j=num-1; j>i;j--){
            cout<<" ";
        }
        for(int k=0;k<2*i+1;k++){
            cout<<"*";
        }
        cout<<endl;
    }
    return 0;
}