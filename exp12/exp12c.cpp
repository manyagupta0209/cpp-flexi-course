#include <iostream>
using namespace std;
//----Initializing class----
class Class1
{
private:
    int value1;
    int value2;

public:
    //----Parameterized constructor with default value----
    Class1(int val1 = 0, int val2 = 0)
    {
        value1 = val1;
        value2 = val2;
        cout << "constructor called value: " << value1 << ", " << value2 << endl;
    }
};
int main()
{
    //----initialising objects----
    Class1 obj1, obj2(5), obj3(5, 8);
    return 0;
}