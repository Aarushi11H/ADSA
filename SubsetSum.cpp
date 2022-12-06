#include <bits/stdc++.h>
using namespace std;

bool isSubsetSum(int arr[], int n, int sum)
{

    bool subset[2][sum + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= sum; j++)
        {
            if (j == 0)
                subset[i % 2][j] = true;
            else if (i == 0)
                subset[i % 2][j] = false;
            else if (arr[i - 1] <= j)
                subset[i % 2][j] = subset[(i + 1) % 2][j - arr[i - 1]] || subset[(i + 1) % 2][j];
            else
                subset[i % 2][j] = subset[(i + 1) % 2][j];
        }
    }
    return subset[n % 2][sum];
}

int main()
{
    cout << "Enter the number of elements in the array: ";
    int n;
    cin >> n;
    cout << "Enter the value of sum: ";
    int sum;
    cin >> sum;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cout << "Enter the " << i + 1 << "th value in the array: ";
        cin >> arr[i];
    }
    if (isSubsetSum(arr, n, sum) == true)
        cout << "There exists a subset with given sum";
    else
        cout << "No subset exists with given sum";
    return 0;
}