# include <iostream>
# include <string>
using namespace std;
int main(){
    string a;
    cout<<"enter the string= ";
    getline(cin,a);
    //---REVERSING A STRING---
    cout<<"the reversed string is=";
    for(int i=a.length();i>=0;i--){
        cout<<a[i];
    }
    return 0;
}