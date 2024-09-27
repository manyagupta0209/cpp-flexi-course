#include <iostream>
using namespace std;
//------Exception handling in dividing two number------
int main()
{
    int a, b;
    cout << "Enter numerator: " << endl;
    cin >> a;
    cout << "Enter denominator: " << endl;
    cin >> b;
    try
    {
        if (b == 0)
        {
            throw b;
        }
        cout << a << " divided by " << b << " = " << a / b << endl;
    }
    catch (const int b)
    {
        cout << "divide by a number greater than 0" << endl;
    }
    return 0;
}