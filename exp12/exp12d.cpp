#include <iostream>
using namespace std;
//----Initializing class----
class Area_rect
{
private:
    int len;
    int bred;

public:
    //----Parameterized constructor which will print area of rect----
    Area_rect(int val1 = 0, int val2 = 0)
    {
        len = val1;
        bred = val2;
        cout << "the area= " << len * bred << endl;
    }
};
int main()
{
    //----input the length and breadth from the user----
    int length, breadth;
    cout << "Enter the length= " << endl;
    cin >> length;
    cout << "Enter the breadth= " << endl;
    cin >> breadth;
    //----initialising objects----
    Area_rect obj(length, breadth);
    return 0;
}