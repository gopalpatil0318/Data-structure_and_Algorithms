#include <iostream>
#include<unordered_map>
using namespace std;

// GeeksForGeek - First Repeating Element

int firstRepeated(int arr[], int n)
{

    unordered_map<int, int> hash;
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]]++;
    }

    for (int i = 0; i < n; i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i + 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {1,5,3,4,5,6};
    int n =6;
    int ans = firstRepeated(arr,n);

    cout << "First Repeating Element Position is = " << ans;
}

//Output 
// First Repeating Element Position is = 2