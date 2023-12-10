#include <iostream>
using namespace std;

// GeeksForGeeks - Linear Search

int search(int arr[], int n, int k)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == k)
        {
            return i + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {9, 7, 2, 16, 4};
    int k = 16;
    int n = 4;
    int pos = search(arr,n,k);
    cout << "Position of " << k << " is " << pos;
}