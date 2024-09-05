#include <iostream>
using namespace std;
int main()
{
    //---------------------INT PTR-------------------
    //----initializing a variable----
    int a = 10;
    //----declaring a pointer----
    int *ptr;
    //----initializing pointer (storing the address of variable in pointer)----
    ptr = &a;
    //----dereferencing the pointer----
    cout << "The value pointed by *ptr is: " << *ptr << endl;
    cout << "The value in a is: " << a << endl;
    //----accesses the address value of variable a----
    cout << "The value in pointer variable ptr is: " << (void *)ptr << endl;
    cout << "the address of variable b is: " << &a << endl;
    ptr++;
    //----increments the value of adress of variable a----
    cout << "After increment the value in pointer variable ptr is: " << (void *)ptr << endl;
    cout << endl;
    //-------------------FLOAT PTR--------------------
    //----initializing a variable----
    float b = 'A';
    //----declaring a pointer----
    float *ptr1;
    //----initialising a pointer----
    ptr1 = &b;
    //----Prints the ASCII value of A----
    cout << "The value pointed by *ptr1 is: " << *ptr1 << endl;
    cout << "The value in b is: " << b << endl;
    //----address of variable b----
    cout << "The value in pointer variable ptr1 is: " << (void *)ptr1 << endl;
    cout << "the address of variable b is: " << &b << endl;
    ptr1++;
    //----increments the value of adress of variable b----
    cout << "After increment the value in pointer variable ptr1 is: " << (void *)ptr1 << endl;
    cout << endl;
    //------------------CHAR PTR------------------
    //----initializing a variable----
    char c = 'A';
    //----declaring a pointer----
    char *ptr2;
    //----initialising a pointer----
    ptr2 = &c;
    //----Prints the value of c----
    cout << "The value pointed by *ptr2 is: " << *ptr2 << endl;
    cout << "The value in c is: " << c << endl;
    //----address of variable c----
    cout << "The value in pointer variable ptr2 is: " << (void *)ptr2 << endl;
    cout << "the address of variable c is: " << static_cast<void *>(&c) << endl;
    ptr2++;
    //----increments the value of adress of variable c----
    cout << "After increment the value in pointer variable ptr1 is: " << static_cast<void *>(ptr2) << endl;
    return 0;
}