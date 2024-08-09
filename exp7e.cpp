#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number of elements in an array= ";
    cin>>number;
    const int elements =number;
    int arr[elements];
    for (int i=0;i<elements;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min;
    for(int j=0;j<elements;j++){
        if(max<arr[j]){
            max=arr[j];
        }
        else{
            min=arr[j];
        }
    }
    cout<<"Max element= "<<max<<" and min element= "<<min;
    return 0;
}