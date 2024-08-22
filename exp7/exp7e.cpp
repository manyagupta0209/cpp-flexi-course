#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"enter the number of elements in an array= ";
    cin>>number;
    const int elements =number;
    int arr[elements];
    //---input the array elements---
    cout<<"enter the elements= ";
    for (int i=0;i<elements;i++){
        cin>>arr[i];
    }
    int max=arr[0];
    int min;
    //find smallest and largest elemnt by comaring all elements of array simulatenously
    for(int j=0;j<elements;j++){
        if(max<arr[j]){
            max=arr[j];
        }
        if(min>arr[j]){
            min=arr[j];
        }
    }
    cout<<"Max element= "<<max<<" and min element= "<<min;
    return 0;
}