#include<iostream>
using namespace std;


int linearSearch(int var,int arr[])
{
    for(int i=0;i<5;i++)
    {
        if(arr[i]== var)
        {
            return 1;
        }
    }
    return 0;
}

int main()
{
    int arr[5] = {12,23,34,23,21};
    int ans = linearSearch(21,arr);
    if(ans == 1)
    {
        cout << "Element is found";
    }
    else{
        cout << "Element is not found";
    }
    
    return 0;
}

