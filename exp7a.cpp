#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number of elements in an array"<<endl;
    cin>>number;
    const int elements =number;
    int arr[elements];
    for (int i=0;i<elements;i++){
        cin>>arr[i];
    }
    for(int j:arr){
    cout<<j;
    }
    return 0;
}