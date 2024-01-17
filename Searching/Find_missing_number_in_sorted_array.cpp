#include<iostream>
using namespace std;


// Find the Missing Number in a sorted array

int findMisNumber(int arr[],int n)
{
    int start = 0;
    int end = n-1;
    int mid = 0;
    int ans = n+2;
    while(start <= end)
    {
       mid = start+(end-start)/2;
       if((mid+1) == arr[mid])
       {
            start = mid+1;
       }
       else
       {
            ans = arr[mid];
            end = mid-1;
       }
    }
    return ans-1;
}

int main()
{
    int arr[] = {1,2,3,4,6,7,8,9};
    int n = 8;
    int ans = findMisNumber(arr,n);
    cout << "Missing element is = " << ans;

}
//Output
// Missing element is = 5