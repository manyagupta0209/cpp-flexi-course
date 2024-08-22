#include<iostream>
using namespace std;
int main(){
    int rows, columns;
    //---take user input for number of rows and columns---
    cout<<"enter the number of rows= ";
    cin>>rows; 
    cout<<"enter the number of columns= ";
    cin>>columns;
    //---initialize an array---
    int a[rows][columns];
    //---input the elements---
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"\na["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    }
    //---printing the matrix---
    cout<<"array in matrix form="<<endl;
    for(int i=0;i<rows;i++){
        for(int j=0;j<columns;j++){
            cout<<"\t"<<a[i][j];
        }
        cout<<endl;
    }

    return 0;
}