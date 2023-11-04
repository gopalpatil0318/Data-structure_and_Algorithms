#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;

// GeeksForGeek - common elements

vector<int> commonElements(int A[], int B[], int C[], int n1, int n2, int n3)
{

    map<int, int> mpp;

    for (int i = 0; i < n1; i++)
    {

        if (mpp[A[i]] == 0)
        {
            mpp[A[i]]++;
        }
    }
    for (int i = 0; i < n2; i++)
    {
        if (mpp[B[i]] == 1)
        {
            mpp[B[i]]++;
        }
    }
    for (int i = 0; i < n3; i++)
    {
        if (mpp[C[i]] == 2)
        {
            mpp[C[i]]++;
        }
    }

    vector<int> ans;

    for (auto it : mpp)
    {
        if (it.second == 3)
        {
            ans.emplace_back(it.first);
        }
    }

    return ans;
}

int main()
{
    int n1 = 6, n2 = 5, n3 = 8;
    int A[] = {1, 5, 10, 20, 40, 80};
    int B[] = {6, 7, 20, 80, 100};
    int C[] = {3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> arr;
    arr = commonElements(A, B, C, n1, n2, n3);

    cout << "Common Elements Are = ";
    for (auto li : arr)
    {
        cout << li << " ";
    }
}

//Output
// Common Elements Are = 20 80 