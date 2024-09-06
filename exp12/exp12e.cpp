#include <iostream>
using namespace std;
//------Creating Class-------
class CLASS1
{
public:
    //------DEFAULT DESTRUCTOR-------
    ~CLASS1()
    {
        cout << "Default destructor has been called" << endl;
    }
    //-----PARAMETERIZED CONSTRUCTOR------
    CLASS1(int val)
    {
        cout << val << " Parameterized constructor has been called" << endl;
    }
};
int main()
{
    int val = 4;
    //-----object creation-----
    CLASS1 obj(val);
    cout << val * val << endl;
    return 0;
}