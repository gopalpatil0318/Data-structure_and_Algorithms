#include<iostream>
#include<limits.h>
using namespace std;



int largestElement(int arr[], int n) {
    

    int max = INT_MIN;
    for(int i=0;i<n;i++)
    {
        if(max<arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}


int main()
{
    int n = 6;
    int arr[] = {2,3,9,4,7,2};
    int max = largestElement(arr,n);
    cout << "MAX Number is : " << max;

}

//OUTPUT
//MAX Number is : 9