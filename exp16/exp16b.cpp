#include <iostream>
using namespace std;
//------Exception handling in dividing two number------
int main()
{
    int a;
    cout << "Enter positive number: " << endl;
    cin >> a;
    try
    {
        if (a < 0)
        {
            throw a;
        }
        cout << "the positive number is " << a << endl;
    }
    catch (const int a)
    {
        cout << "enter positive number" << endl;
    }
    return 0;
}