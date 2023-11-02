#include <iostream>
using namespace std;

// Missing element from an array with duplicate

int missingEle(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int index = abs(arr[i]);
        if (arr[index - 1] > 0)
        {
            arr[index-1] *= -1;
        }
    }


    cout << "missing elements are = ";
    for(int i =0;i<n;i++)
    {
        if(arr[i]>0)
        {
            cout << i+1 << " ";
        }
    }
    return 0;
}



int main()
{
    int arr[] = {1,3,3,4,3};
    int n = 5;
    missingEle(arr,n);
    return 0;
}

//Output
// missing elements are = 2 5 