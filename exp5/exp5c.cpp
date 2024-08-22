#include<iostream>
using namespace std;
int main(){
    int oper,a,b;
    float ans;
    cout<<"operation to perform\n1:Add\n2:Sub\n3:Mult\n4:Div"<<endl;
    cin>>oper;
    switch(oper){
        case 1://---ADDITION---
        cout<<"enter 1st number"<<endl;
        cin>>a;
        cout<<"enter the 2nd number"<<endl;
        cin>>b;
        cout<<"Sum "<<a<<"+"<<b<<"="<<a+b;
        break;

        case 2://---DIFFERENCE---
        cout<<"enter 1st number"<<endl;
        cin>>a;
        cout<<"enter the 2nd number"<<endl;
        cin>>b;
        cout<<"Difference of "<<a<<"-"<<b<<"="<<a-b;
        break;

        case 3://---MULTIPLICATION---
        cout<<"enter 1st number"<<endl;
        cin>>a;
        cout<<"enter the 2nd number"<<endl;
        cin>>b;
        cout<<"Multiplication of"<<a<<"*"<<b<<"="<<a*b;
        break;

        case 4://---DIVISION---
        cout<<"enter 1st number"<<endl;
        cin>>a;
        cout<<"enter the 2nd number"<<endl;
        cin>>b;
        //---checks whether the denominator is not zero---
        if(b==0){
            cout<<"infinite answer";
        }
        else{
            ans= float(a)/float(b);
            cout<<"Division of "<<a<<"/"<<b<<"="<<ans;
        }
        break;

        default:
        cout<<"invalid input";
        break;
    }
    return 0;
}