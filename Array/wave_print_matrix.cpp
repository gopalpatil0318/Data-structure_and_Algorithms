#include <iostream>
#include <vector>
using namespace std;

// CodeHelp - wave print a matrix

void wavePrint(vector<vector<int>> arr)
{
    int n = arr.size();
    int m = arr[0].size();
    for (int i = 0; i < m; i++)
    {
        if ((i & 1) == 0)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = n - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}

int main()
{
    vector<vector<int>> arr = {{1, 2, 3, 4},
                               {5, 6, 7, 8},
                               {9, 10, 11, 12}};
    wavePrint(arr);
}
//Output
// 1 5 9 10 6 2 3 7 11 12 8 4 