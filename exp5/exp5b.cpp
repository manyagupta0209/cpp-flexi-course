#include<iostream>
using namespace std;
int main(){
    int oper,a,b;
    float ans;
    cout<<"operation to perform\n1:Add\n2:Sub\n3:Mult\n4:Div"<<endl;
    cin>>oper;
    switch(oper){
        case 1:
        cout<<"enter 1st number"<<endl;
        cin>>a;
        cout<<"enter the 2nd number"<<endl;
        cin>>b;
        cout<<a+b;
        break;

        case 2:
        cout<<"enter 1st number"<<endl;
        cin>>a;
        cout<<"enter the 2nd number"<<endl;
        cin>>b;
        cout<<a-b;
        break;

        case 3:
        cout<<"enter 1st number"<<endl;
        cin>>a;
        cout<<"enter the 2nd number"<<endl;
        cin>>b;
        cout<<a*b;
        break;

        case 4:
        cout<<"enter 1st number"<<endl;
        cin>>a;
        cout<<"enter the 2nd number"<<endl;
        cin>>b;
        if(b==0){
            cout<<"infinite answer";
        }
        else{
            ans= float(a)/float(b);
            cout<<ans;
        }
        break;

        default:
        cout<<"invalid input";
        break;
    }
    return 0;
}