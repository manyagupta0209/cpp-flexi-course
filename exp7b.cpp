#include<iostream>
using namespace std;
int main(){
    int no_of_elements;
    cout<<"enter the number of elements in the array= ";
    cin>>no_of_elements;
    int arr[no_of_elements];
    cout<<"enter the elements"<<endl;
    for(int i=0; i<no_of_elements;i++){
        cin>>arr[i];
    }
    int element_to_searched;
    int count = 0;
    cout<<"enter the element to be searched= ";
    cin>>element_to_searched;
    for(int j=0;j<no_of_elements;j++){
        if(arr[j]==element_to_searched){
            cout<<element_to_searched<<" is present at "<<j<<endl;
            count=count+1;
        }
    }
    if(count==0){
        cout<<element_to_searched<<" is not present"<<endl;
    }
    cout<<"the element "<<element_to_searched<<" occurs "<<count<<" times";
    return 0;
}