#include<iostream>
#include<vector>
using namespace std;

//Leetcode - 2643. Row With Maximum Ones

vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        vector<int> ans;
        int n = mat.size();
        int sum = 0,index=0;
        for(int i=0;i<n;i++)
        {
            int count = 0;
            for(int j = 0;j<mat[i].size();j++)
            {
                if(mat[i][j] == 1)
                {
                    count++;
                }
            }
            if(count>sum)
            {
                sum = count;
                index = i;
            }
        }
       
        ans.push_back(index);
        ans.push_back(sum);
        return ans;
    }

int main()
{
    vector<vector<int>> mat = { {0,0,0},{0,1,1}};
    vector<int> ans;
    ans = rowAndMaximumOnes(mat);   
    cout << "Index is = " << ans[0] << ", count of 1's is = " << ans[1] ;
    return 0;
}
//Output
// Index is = 1, count of 1's is = 2