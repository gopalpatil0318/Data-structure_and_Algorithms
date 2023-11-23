#include<iostream>
#include<vector>
using namespace std;

//Leetcode - 26. Remove Duplicates from Sorted Array

int removeDuplicates(vector<int>& nums) {
        int k = 1;
        for(int i = 1;i<nums.size();i++)
        {
            if(nums[i] != nums[k-1])
            {
                nums[k] = nums[i];
                k++;
            }
        }
        return k;
    }

    int main()
    {
        vector<int> nums = {0,0,1,1,1,2,2,3,3,4};
        int length = removeDuplicates(nums);
        cout << "Unique elements lenght : " << length  << endl;

        cout << "Unique elements array : ";
        for(int i = 0;i<length;i++)
        {
            cout << nums[i] << " ";
        }
    }

    //Output
    // Unique elements lenght : 5
    // Unique elements array : 0 1 2 3 4