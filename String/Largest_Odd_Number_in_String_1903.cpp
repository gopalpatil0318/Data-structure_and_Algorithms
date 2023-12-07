#include <iostream>
using namespace std;

// Leetcode - 1903. Largest Odd Number in String

string largestOddNumber(string num)
{
    string ans = "";
    for (int i = num.size() - 1; i >= 0; i--)
    {
        if ((num[i] - '0') % 2 == 1)
            return num.substr(0, i + 1);
    }
    return ans;
}

int main()
{
    string num = "3542782";
    string ans = largestOddNumber(num);
    cout << ans;
}

//Output
// 35427