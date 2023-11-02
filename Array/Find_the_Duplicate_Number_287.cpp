#include<iostream>
#include<vector>
using namespace std;

//Leetcode - 287. Find the Duplicate Number

 int findDuplicate(vector<int>& nums) {
        while(nums[0] != nums[nums[0]])
        {
            swap(nums[0] , nums[nums[0]]);
        }
        return nums[0];
    }

int main()
{
    // vector<int> nums = {1,3,4,2,2};
    vector<int> nums = {3,1,3,4,2};
    int ans = findDuplicate(nums);
    cout << "Duplicate Element is = " << ans;
    return 0;
}

//Output
// Duplicate Element is = 3