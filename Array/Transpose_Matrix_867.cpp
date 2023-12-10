#include <iostream>
#include <vector>
using namespace std;

// LeetCode - 867. Transpose Matrix

vector<vector<int>> transpose(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    int m = matrix[0].size();
    vector<vector<int>> ans(m, vector<int>(n, 0));

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            ans[j][i] = matrix[i][j];
        }
    }
    return ans;
}

int main()
{

    vector<vector<int>> inputMatrix = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    vector<vector<int>> transposedMatrix = transpose(inputMatrix);

    cout << "Original Matrix:" << endl;
    for (const auto &row : inputMatrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    cout << "\nTransposed Matrix:" << endl;
    for (const auto &row : transposedMatrix)
    {
        for (int val : row)
        {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}

//Output
// Original Matrix:
// 1 2 3
// 4 5 6
// 7 8 9

// Transposed Matrix:
// 1 4 7
// 2 5 8
// 3 6 9