#include <bits/stdc++.h>
using namespace std;
int main()
{
    // 1D ARRAY
    // int n;
    // cin >> n;
    // int *arr = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin >> arr[i];
    // }
    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }

    // 2D ARRAY
    int row;
    int col;
    cin >> row;
    cin >> col;
    int **arr = new int *[row];
    // CREATE COLUMNS
    for (int i = 0; i < row; i++)
    {
        arr[i] = new int[col];
    }
    // TAKING INPUTS
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }
    // OUTPUT
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    // Delete ARRAY
    for (int i = 0; i < row; i++)
    {
        delete[] arr[i];
    }

    for (int i = 0; i < col; i++)
    {
        delete[] arr[i];
    }
    delete[] arr;
}
