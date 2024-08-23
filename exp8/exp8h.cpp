#include <iostream>
#include <string>
using namespace std;
int main()
{
    int rows, columns;
    //---take user input for number of rows and columns---
    cout << "enter the number of rows= ";
    cin >> rows;
    cout << "enter the number of columns= ";
    cin >> columns;
    //---initialize an array---
    int a[rows][columns];
    //---input the elements---
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout << "\na[" << i << "][" << j << "]= ";
            cin >> a[i][j];
        }
    }
    //-------Adjoint of the matrix-------
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            // int a = i;
            // i = j;
            // j = a;
            cout << "array in transpose form=" << endl;
            cout << "\t" << a[j][i];
        }
        cout << endl;
    }
    return 0;
}