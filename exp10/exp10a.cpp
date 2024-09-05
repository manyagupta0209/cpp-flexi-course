#include <iostream>
using namespace std;
//----function for swapping by value----
void swap_by_value(int a, int b)
{
    int c;
    c = a;
    a = b;
    b = c;
    cout << "Inside swap by value function: " << "a = " << a << " , " << "b = " << b << endl;
}
int main()
{
    int a = 4, b = 3;
    cout << "before swapping by value a= " << a << " b= " << b << endl;
    //----sending the values of a and b in the swap function----
    swap_by_value(a, b);
    cout << "after  swapping by value a= " << a << " b= " << b << endl;
    return 0;
}