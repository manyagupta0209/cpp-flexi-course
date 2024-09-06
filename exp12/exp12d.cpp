#include <iostream>
using namespace std;
//----Initializing class----
class Area_rect
{
private:
    int len;
    int bred;

public:
    int length, breadth;
    //----function to input input the length and breadth from the user----
    int Input_dimension()
    {
        cout << "Enter the length= " << endl;
        cin >> length;
        cout << "Enter the breadth= " << endl;
        cin >> breadth;
        len = length;
        bred = breadth;
        return 0;
    }
    //----Parameterized constructor which will print area of rect----
    int Area()
    {
        Input_dimension();
        cout << "the area of rectangle = " << len * bred << endl;
    }
};
int main()
{
    //----initialising objects----
    Area_rect obj;
    //----creating the instance of the class----
    obj.Area();
    return 0;
}