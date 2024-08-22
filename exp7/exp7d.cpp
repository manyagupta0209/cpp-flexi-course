#include<iostream>
using namespace std;
int main(){
    int elements;
    cout<<"enter the number of elements in an array= ";
    cin>>elements;
    int arr[elements];
    cout<<"enter the elements= ";
    for (int i=0;i<elements;i++){
        cin>>arr[i];
    }
    //---prints the average of elements of array---
    float count =0;
    for(int j=0;j<elements;j++){
        count =count+arr[j];
    }
    cout<<"the average of elemnts of array= "<<count/elements;
    return 0;
}
