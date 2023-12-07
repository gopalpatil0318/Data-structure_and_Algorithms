#include <iostream>
#include <vector>
#include <climits>
using namespace std;

// GeeksForGeek - Largest Element in Array

int largest(vector<int> &arr, int n)
{
    int lar = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > lar)
        {
            lar = arr[i];
        }
    }
    return lar;
}

int main()
{
    int n = 5;
    vector<int> arr = {1, 8, 7, 56, 90};
    int ans = largest(arr, n);
    cout << "Largest element is : " << ans;
}

//Output
// Largest element is : 90