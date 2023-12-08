#include <iostream>
#include <vector>
using namespace std;

// Leetcode - 1752. Check if Array Is Sorted and Rotated

bool check(vector<int> &nums)
{
    int c = 0;
    int n = nums.size();
    if (nums[0] < nums[n - 1])
    {
        c++;
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (nums[i] > nums[i + 1] && c == 0)
        {
            c++;
        }
        else if (nums[i] > nums[i + 1] && c != 0)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    vector<int> nums = {3, 4, 5, 1, 2};
    bool ans = check(nums);
    if (ans == 1)
    {
        cout << "Array is sorted";
    }
    else
    {
        cout << "Array is not sorted";
    }
}

//Output
// Array is sorted