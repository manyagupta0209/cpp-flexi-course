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
    float count =0;
    for(int j=0;j<elements;j++){
        count =count+arr[j];
    }
    cout<<"the everage of elemnts of array= "<<count/elements;
    return 0;
}
