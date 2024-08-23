#include <iostream>
using namespace std;
int main()
{
    //------input the rows and columns------
    int row, column, x, sum_of_diagonal1 = 0, sum_of_diagonal2 = 0;
    cout << "enter the rows of the matrix= ";
    cin >> row;
    cout << "enter the columns of the matrix= ";
    cin >> column;
    //----initialize the array----
    int arr[row][column];
    //----input the elements of the array----
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            cout << "\narr[" << i << "][" << j << "]= ";
            cin >> arr[i][j];
        }
    }
    //----adding the first diagonal elements----
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            if (i == j)
            {
                sum_of_diagonal1 += arr[i][j];
            }
        }
    }
    cout << "sum of diagonal= " << sum_of_diagonal1 << endl;
    //-----adding the second diagonal elements-----
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < column; j++)
        {
            x = i + j;
            if (x == column-1)
            {
                sum_of_diagonal2 += arr[i][j];
            }
        }
    }
    cout << "sum of diagonal= " << sum_of_diagonal2;
    return 0;
}