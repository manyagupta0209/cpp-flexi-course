#include <iostream>
using namespace std;
//------function to find the sum of n natural numbers------
int sum_nat(int n)
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
        return n + sum_nat(n - 1);
    }
}
int main()
{
    int num;
    cout << "Enter a number: " << endl;
    cin >> num;
    cout << "The sum of the first " << num << " natural numers is  " << sum_nat(num) << endl;
    return 0;
}