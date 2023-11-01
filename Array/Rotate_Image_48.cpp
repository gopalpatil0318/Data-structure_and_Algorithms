#include <iostream>
#include <vector>
using namespace std;

// Leetcode - 48. Rotate Image

void rotateArray(vector<vector<int>> &arr)
{
    int n = arr.size();
    //take transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    //Reverse Array by Row
    for (int i = 0; i < n/2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            swap(arr[j][i], arr[j][n - (i+1)]);
        }
    }
}

int main()
{
    vector<vector<int>> arr = {{ 5, 1, 9, 11 },  {2, 4, 8, 10 }, { 13, 3, 6, 7 }, { 15, 14, 12, 16 }};
    // vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    rotateArray(arr);

    for (auto li : arr)
    {
        for (auto k : li)
        {
            cout << k << " ";
        }
        cout << endl;
    }
}

// Output
// 15 13 2 5 
// 14 3 4 1
// 12 6 8 9
// 16 7 10 11