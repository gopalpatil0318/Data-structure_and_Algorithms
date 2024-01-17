#include<iostream>
using namespace std;

//Number of occurrence - GeeksForGeeks


int findTotalOccurnace(int arr[],int n,int target)
{
    int start = 0;
    int end = n-1;
    int left = 0;
    while(start <= end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid]== target)
        {
            left = mid;
            end = mid - 1;
        }
        else if(target>arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }

    start = 0;
    end = n-1;
    int right = -1;
    while(start <= end)
    {
        int mid = start+(end-start)/2;
        if(arr[mid]== target)
        {
            right = mid;
            start = mid + 1;
        }
        else if(target>arr[mid])
        {
            start = mid+1;
        }
        else
        {
            end = mid-1;
        }
    }
    return (right-left+1);
}

int main()
{
    int arr[] = {1,2,3,4,5,6,7,7,7,7,8,9};
    int n = 12;
    int target = 12;
    int ans = findTotalOccurnace(arr,n,target);

    cout << ans;
}