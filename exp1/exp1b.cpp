#include<iostream>
using namespace std;
int main(){
    float a,b,sum,sub,mult,div;
    cout<<"enter the first"<<endl;
    cin>>a;
    cout<<"enter the second number"<<endl;
    cin>>b;
    sum=a+b;
    sub=a-b;
    mult=a*b;
    div=a/b;
    cout<<"the sum of "<<a<<" and "<<b<<" is = "<<float(sum)<<endl;
    cout<<"the difference of "<<a<<" and "<<b<<" is = "<<float(sub)<<endl;
    cout<<"the multiplication of "<<a<<" and "<<b<<" is = "<<float(mult)<<endl;
    cout<<"the division of "<<a<<" and "<<b<<" is = "<<div<<endl;
    return 0;
}
