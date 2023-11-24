#include <iostream>
#include <vector>
using namespace std;

// GeeksForGeeks - Second Largest

int print2largest(int arr[], int n)
{
    int largest = arr[0];
    int slargest = -1;

    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (largest > arr[i] && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int main()
{
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = 6;

    int ans = print2largest(arr,n);

    cout << "Sceond largest element is : " << ans ;
}
//Output
// Sceond largest element is : 34

