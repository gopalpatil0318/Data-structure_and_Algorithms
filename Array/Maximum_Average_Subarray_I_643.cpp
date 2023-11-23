#include <iostream>
#include <vector>
using namespace std;
// Leetcode - 643. Maximum Average Subarray I
// sliding window aproach

double findMaxAverage(vector<int> &nums,int k)
{
    int i = 0, j = k - 1;
    double sum = 0;
    for (int y = i; y <= j; y++)
    {
        sum += nums[y];
    }
    j++;
    double ans = sum;
    while (j < nums.size())
    {
        sum -= nums[i++];
        sum += nums[j++];
        ans = max(ans, sum);
    }

    ans /= k;
    return ans;
}

int main()
{

    vector<int> nums = {1, 12, -5, -6, 50, 3};
    int k = 4;
    double ans = findMaxAverage(nums, k);
    cout << "Maximum Average is = " << ans;
}

//Output
// Maximum Average is = 12.75