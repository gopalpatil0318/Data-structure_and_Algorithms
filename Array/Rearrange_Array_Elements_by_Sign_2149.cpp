#include <iostream>
#include <vector>
using namespace std;

// Leetcode - 2149. Rearrange Array Elements by Sign

vector<int> rearrangeArray(vector<int> &nums)
{
    int n = nums.size();
    vector<int> arr(n);
    int even = 0, odd = 1;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > 0)
        {
            arr[even] = nums[i];
            even += 2;
        }
        else
        {
            arr[odd] = nums[i];
            odd += 2;
        }
    }

    return arr;
}

int main()
{
    vector<int> arr = {3, 1, -2, -5, 2, -4};
    arr = rearrangeArray(arr);

    for(auto li:arr)
    {
        cout << li << " ";
    }
}

//Output
// 3 -2 1 -5 2 -4 