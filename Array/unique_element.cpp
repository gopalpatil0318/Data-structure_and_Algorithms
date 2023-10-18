#include<iostream>
using namespace std;

int findUnique(int arr[],int n)
{
    int ans = 0;
    for(int i=0;i<n;i++)
    {
        ans = ans^arr[i];
    }
    return ans;
}

int main()
{
    int n=9;
    int arr[n] = {11,22,43,11,22,43,56,34,56};
    int ans = findUnique(arr,n);
    cout << "Unique element is: " << ans ;
}


//OUTPUT
// Unique element is: 34