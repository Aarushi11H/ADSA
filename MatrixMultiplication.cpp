#include <bits/stdc++.h>
using namespace std;

void multiply(int m1, int m2, int mat1[][2], int n1, int n2, int mat2[][2])
{
    int x, i, j;
    int res[m1][n2];
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            res[i][j] = 0;
            for (x = 0; x < m2; x++)
            {
                *(*(res + i) + j) += *(*(mat1 + i) + x) * *(*(mat2 + x) + j);
            }
        }
    }
    for (i = 0; i < m1; i++)
    {
        for (j = 0; j < n2; j++)
        {
            cout << *(*(res + i) + j) << " ";
        }
        cout << "\n";
    }
}

int main()
{
    int m1 = 2, m2 = 2, n1 = 2, n2 = 2;
    cout << "Enter numbers of rows and columns of first matrix: ";
    cin >> n1 >> m1;
    cout << "Enter numbers of rows and columns of second matrix: ";
    cin >> n2 >> m2;

    int mat1[][2] = {{2, 4}, {3, 4}};
    int mat2[][2] = {{1, 2}, {1, 3}};

    for (int i = 0; i < n1; i++)
    {
        for (int j = 0; j < m1; j++)
        {
            cout << "Enter " << i + 1 << "th and " << j + 1 << "th element of the first matrix: ";
            cin >> mat1[i][j];
        }
    }
    for (int i = 0; i < n2; i++)
    {
        for (int j = 0; j < m2; j++)
        {
            cout << "Enter " << i + 1 << "th and " << j + 1 << "th element of the second matrix: ";
            cin >> mat2[i][j];
        }
    }
    multiply(m1, m2, mat1, n1, n2, mat2);
    return 0;
}
