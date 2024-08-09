#include<iostream>
using namespace std;
int main(){
    int elements;
    cout<<"enter the number of elements in an array"<<endl;
    cin>>elements;
    int arr[elements];
    for (int i=0;i<elements;i++){
        cin>>arr[i];
    }
    for(int j=elements-1;j>=0;j--){
    cout<<arr[j];
    }
    return 0;
}