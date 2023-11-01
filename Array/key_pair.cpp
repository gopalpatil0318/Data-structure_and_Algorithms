#include <iostream>
#include <algorithm>
using namespace std;

// GeekForGeeks - key pair

bool hasArrayTwoCandidates(int arr[], int n, int x)
{
    sort(arr, arr + n);
    int l = 0;
    int h = n - 1;
    while (l < h)
    {
        int csum = arr[l] + arr[h];
        if (csum == x)
        {
            return true;
        }
        else if (csum > x)
        {
            h--;
        }
        else
        {
            l++;
        }
    }
    return false;
}

int main()
{
    int arr[] = {1, 4, 45, 6, 10, 8};
    // target
    int x = 16;
    // size
    int n = 6;
    bool ans = hasArrayTwoCandidates(arr, n, x);
    if(ans == 1)
    {
        cout << "Yes";
    }
    else{
        cout << "No";
    }
    
    return 0;
}

//Output
// Yes