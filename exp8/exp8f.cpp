#include<iostream>
using namespace std;
int main(){
    int rows1, columns1,rows2,columns2;
    //----------input rows and columns for the 2 matrices from the user----------
    cout<<"FOR 1st MATRIX----enter the number of rows= ";
    cin>>rows1; 
    cout<<"FOR 1st MATRIX----enter the number of columns= ";
    cin>>columns1;
    cout<<"FOR 2nd MATRIX----enter the number of rows= ";
    cin>>rows2;
    cout<<"FOR 2nd MATRIX----enter the number of columns= ";
    cin>>columns2;
    int a[rows1][columns1];
    int b[rows2][columns2];
    int sum[rows1][columns1];
    int mult[rows1][columns2];
    // MATRIX 1
    for(int i=0;i<rows1;i++){
        for(int j=0;j<columns1;j++){
            cout<<"\na["<<i<<"]["<<j<<"]= ";
            cin>>a[i][j];
        }
    }
    // MATRIX 2
    for(int i=0;i<rows2;i++){
        for(int j=0;j<columns2;j++){
            cout<<"\nb["<<i<<"]["<<j<<"]= ";
            cin>>b[i][j];
        }
    }
    //------------ADDITION------------
    if(rows1!=rows2 & columns1!=columns2){
        cout<<"addition cannot be performed"<<endl;
    }
    else{
        cout<<"The SUM MATRIX="<<endl;
        for(int i=0; i<rows1;i++){
            for(int j=0; j<columns1;j++){
                
                sum[i][j]=a[i][j]+b[i][j];
                cout<<"\t"<<sum[i][j];
            }
            cout<<endl;
        }
    }

    //-------------MULTIPLICATION--------------
    if(columns1==rows2){
        cout<<"The MULTIPLIED MATRIX="<<endl;
        for(int i=0;i<rows1;i++){
            for(int j=0; j<columns2;j++){
                mult[i][j]=a[i][j]*b[j][i];
                cout<<"\t"<<mult[i][j];
            }
            cout<<endl;
        }
    }
    else{
        cout<<"Multiplication can not be performed";
    }
    return 0;
}