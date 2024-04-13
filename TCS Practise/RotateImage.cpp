#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main()
{
    int n;
    cout << "Enter the length of an square matrix : ";
    cin >> n;

    int matrix[n][n];
    cout << "Enter the  elements of an matrix : ";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }

    // Logic Implementation...

    // 1. Transpose  of a Matrix

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(matrix[i][j], matrix[j][i]);
        }
    }

    // 2. Reverse  each row and column of the transposed matrix

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; ++j)
        {
            swap(matrix[i][j], matrix[i][n - j - 1]);
        }
    }

    // Printing New Matrix
    cout << "Printing New Matrix..";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << matrix[i][j] << " ";
        }
    }
    return 0;
}