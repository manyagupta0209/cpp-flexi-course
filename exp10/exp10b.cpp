#include <iostream>
using namespace std;
//----function for swapping by reference----
void swap_by_reference(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
    cout << "Inside swap by reference function: " << "a = " << *a << " , " << "b = " << *b << endl;
}
int main()
{
    int a = 4, b = 3;
    cout << "before swapping by reference a= " << a << " b= " << b << endl;
    //----sending the addresses of a and b in the swap function----
    swap_by_reference(&a, &b);
    cout << "after  swapping by reference a= " << a << " b= " << b << endl;
    return 0;
}