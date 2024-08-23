#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a, b;
    //---Input 2 strings---
    cout << "enter the string1 = ";
    getline(cin, a);
    cout << "enter the string2 = ";
    getline(cin, b);
    //---string concatenation---
    cout << a + b;
    return 0;
}