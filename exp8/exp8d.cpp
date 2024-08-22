# include <iostream>
# include <string>
using namespace std;
int main(){
    string a, rev_a;
    cout<<"enter the string= ";
    getline(cin,a);
    //---reversing a string---
    for(int i=a.length()-1;i>=0;i--){
        rev_a+=a[i];
    }
    //---comparing reversed string to original----
    //---if orignal string = rev string---->PALLINDROME---
    if(a==rev_a){
        cout<<a<<" is a palindrome= ";
    }
    //---else not a pallindrome---
    else{
        cout<<a<<" is not a palindrome";
    }
    return 0;
}