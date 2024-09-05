#include <iostream>
using namespace std;
int main()
{
    int a, b;
    //----input the elements----
    cout << "enter the first number= " << endl;
    cin >> a;
    cout << "enter the second number=" << endl;
    cin >> b;
    //----display output----
    cout << a << " " << boolalpha << (a == b) << " " << b;
}