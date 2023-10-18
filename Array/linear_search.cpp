#include<iostream>
using namespace std;


bool linearSearch(int var,int arr[])
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
    int target = 21;
    bool flag = linearSearch(target,arr);
    if(flag == 1)
    {
        cout << "Element is found";
    }
    else{
        cout << "Element is not found";
    }
    
    return 0;
}

