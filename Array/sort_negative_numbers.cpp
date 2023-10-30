#include <iostream>
using namespace std;
// sort the negative number in left side and positive numbers in right with two pointers approach
void sortNegatives(int arr[], int n)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < 0)
        {
            int temp = arr[count];
            arr[count] = arr[i];
            arr[i] = temp;
            count++;
        }
    }
}

int main()
{
    // array
    int arr[] = {23, -7, 12, -10, -11, 40, 60};
    int n = 7;
    // calling function

    sortNegatives(arr, n);

    // print solution
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Output
//  -7 -10 -11 23 12 40 60