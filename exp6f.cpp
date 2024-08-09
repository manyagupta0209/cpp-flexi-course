#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    char alph ='A';
   for(int i=0;i<num;i++){
        for(int j=0; j<i ;j++){
        cout<<alph;
        alph = alph +1;
        cout<<" ";
    }
    cout<<endl;
        }

    //for repeating alphabet pattern
    char alpha='A';
     for(int i=0;i<num;i++){
        for(int j=0; j<=i ;j++){
        cout<<alpha;
        cout<<" ";
    }
    alpha = alpha +1;
    cout<<endl;
        }
    return 0;
}