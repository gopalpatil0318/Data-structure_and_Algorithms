#include <iostream>
using namespace std;

//GeeksForGeeks - Left Rotate array

void reverseArr(int arr[], int low, int high)
{
    while (low < high)
    {
        int temp = arr[low];
        arr[low] = arr[high];
        arr[high] = temp;
        low++;
        high--;
    }
}

void rotateArr(int arr[], int d, int n)
{
    d = d % n;

    reverseArr(arr, 0, d - 1);
    reverseArr(arr, d, n - 1);
    reverseArr(arr, 0, n - 1);
}

int main()
{
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int d = 2;
    rotateArr(arr,d,n);
    for(int i = 0;i<n;i++)
    {
        cout << arr[i] << " ";
    }
}

//Output
// 3 4 5 1 2 