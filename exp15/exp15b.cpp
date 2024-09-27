#include <iostream>
using namespace std;
//------function to find the fibonacci series------
int fibo(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 1) + fibo(n - 2);
    }
}
int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;

    cout << "The" << num << "th fibonacci number in fibonacci sequence is  " << fibo(num - 1) << endl;
    return 0;
}