#include <iostream>
using namespace std;
//------Exception handling in dividing two number------
int main()
{
    int a;
    cout << "Enter the year greater than 2000: " << endl;
    cin >> a;
    try
    {
        if (a < 2000)
        {
            throw "you entered year less than 2000";
        }
        cout << "the year is " << a << endl;
    }
    catch (const char* msg)
    {
        cout << msg<< endl;
    }
    return 0;
}