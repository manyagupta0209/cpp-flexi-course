#include<iostream>
using namespace std;
int main(){
    //---inputs the number of elements in an array---
    int elements;
    cout<<"enter the number of elements in an array= ";
    cin>>elements;
    int arr[elements];
    //---inputs the elements of the array---
    cout<<"enter the elements= ";
    for (int i=0;i<elements;i++){
        cin>>arr[i];
    }
    //---reverses the elements of the array---
    cout<<"the reversed array= ";
    for(int j=elements-1;j>=0;j--){
    cout<<arr[j];
    }
    return 0;
}