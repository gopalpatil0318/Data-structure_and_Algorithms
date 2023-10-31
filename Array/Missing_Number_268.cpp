#include <iostream>
#include <vector>
using namespace std;

// Leetcode - 268. Missing Number

int missingNumber(vector<int> &arr)
{
    int n = arr.size();
    int total = n * (n + 1) / 2;
    int sum = 0;
    for (int li:arr)
    {
        sum += li;
    }
    return total - sum;
}

int main()
{
    vector<int> arr = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    int ans = missingNumber(arr);

    cout << "missing number is = " << ans;
    return 0;
}

//Output 
// missing number is = 8