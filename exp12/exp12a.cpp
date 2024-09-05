#include <iostream>
using namespace std;
//------Creating Class-------
class CLASS1
{
public:
    //------DEFAULT CONSTRUCTOR-------
    CLASS1()
    {
        cout << "Default constructor has been called" << endl;
    }
    //-----PARAMETERIZED CONSTRUCTOR------
    CLASS1(string value, int a)
    {
        cout << value << " parameterized constructor has been called" << endl;
        cout << "Parameterized constructor value: " << a;
    }
};
int main()
{
    //-----object creation-----
    CLASS1 obj, obj1("Hello!", 1);

    return 0;
}