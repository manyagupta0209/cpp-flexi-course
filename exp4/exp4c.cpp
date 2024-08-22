#include <iostream>
#include <string>
using namespace std;
int main()
{
    string password;
    cout<<"Enter the password= ";
    getline(cin, password);
    //----Password Authentication----
    if (password == "secret")
    {
        cout << "access granted";
    }
    else
    {
        cout << "accesss denied";
    }
    return 0;
}