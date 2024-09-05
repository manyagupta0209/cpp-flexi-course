#include <iostream>
using namespace std;
//------Creating Class-------
class CLASS1
{
private:
    int value;

public:
    //-----PARAMETERIZED CONSTRUCTOR------
    CLASS1(int val)
    {
        value = val;
        cout << "Parameterized constructor value: " << value << endl;
    }
    //----Copy Constructor----
    CLASS1(const CLASS1 &obj)
    {
        //----Accessing the address of obj1 and storing the value in private variable-----
        value = obj.value;
        cout << "copy constructor called. Value: " << value << endl;
    }
};
int main()
{
    //-----object creation-----
    CLASS1 obj1(10), obj2 = obj1;

    return 0;
}