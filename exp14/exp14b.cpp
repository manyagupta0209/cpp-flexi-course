#include <iostream>
using namespace std;
//--------------MULTIPLE INHERITANCE---------------
class Base1
{
protected:
    int a;

public:
    int num1(int number1 = 0)
    {
        a = number1;
    }
};
class Base2
{
protected:
    int b;

public:
    int num2(int number2 = 0)
    {
        b = number2;
    }
};
class Child : public Base1, public Base2
{
public:
    int sum()
    {
        int ans = a + b;
        cout << "number 1 = " << a << endl;
        cout << "number 2 = " << b << endl;
        cout << "the sum of " << a << " and " << b << " = " << ans;
    }
};
int main()
{
    Child c;
    c.num1(1);
    c.num2(3);
    c.sum();
    return 0;
}