#include <iostream>
using namespace std;
//--------------FUNCTION OVERLOADING---------------
int add(int a, int b)
{
    return a + b;
}
float add(float a, float b)
{
    return a + b;
}
int add(int a, int b, int c)
{
    return a + b + c;
}
int main()
{

    cout << "addition of 2 integers: " << endl
         << " 3 + 4 = " << add(3, 4) << endl;
    cout << "addition of 2 float values: " << endl
         << "3.5 + 4.5 = " << add(3.5f, 4.5f) << endl;
    cout << "addition of 3 integers: " << endl
         << " 1 + 3 + 5 = " << add(1, 3, 4) << endl;
    return 0;
}