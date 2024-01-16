#include <iostream>
using namespace std;

// Binary search

int binarySearch(int arr[], int n, int target)
{
    int start = 0;
    int end = n - 1;
    int mid = 0;
    while (start <= end)
    {

        mid = (start + end) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {02, 18, 35, 44, 56, 67, 69, 71, 81, 102};
    int n = 10;
    int target = 0;
    cout << "Enter Target Value = ";
    cin >> target;
    int ans = binarySearch(arr, n, target);
    if(ans == -1)
    {
        cout << "Element not found.";
    }
    else
    {
        cout << "Element Found at index = " << ans;
    }
    return 0;
}
//Output
// Enter Target Value = 102
// Element Found at index = 9