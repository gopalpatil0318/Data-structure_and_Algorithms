#include<iostream>
using namespace std;

//reverse An array

int reverse(int arr[],int n)
{
    int left =0,right=n-1;
    while(left<right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left ++;
        right --;
    }
}

int main(){

    int arr[7] = {1,2,3,4,5,6,7};
    reverse(arr,7);
    for(int i=0;i<7;i++)
    {
        cout << arr[i] << " ";
    }



    return 0;
}

//OUTPUT
//7 6 5 4 3 2 1 