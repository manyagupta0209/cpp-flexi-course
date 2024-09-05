#include <iostream>
using namespace std;
int main()
{
    //----declaring a pointer----
    int *ptr;
    //----declaring and initializing an array----
    int a[5] = {1, 3, 5, 8, 9};
    //----initializing pointer (storing the address of variable in pointer)----
    ptr = &a[0];
    //----for loop for accessing values in array----
    for (int i = 0; i < 5; i++)
    {
        cout << "element " << i + 1 << " = " << *ptr << endl;
        ptr++;
    }
    return 0;
}