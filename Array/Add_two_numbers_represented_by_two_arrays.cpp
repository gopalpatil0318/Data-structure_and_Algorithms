#include <iostream>
#include <vector>
#include<string>
using namespace std;

// GeeksForGeeks - Add two numbers represented by two arrays

string calc_Sum(int *a, int n, int *b, int m)
{

    int i = n - 1, j = m - 1;
    int carry = 0;
    string ans;

    while (i >= 0 && j >= 0)
    {
        int sum = a[i] + b[j] + carry;
        ans = to_string(sum % 10) + ans;
        carry = sum / 10;
        j--;
        i--;
    }

    while (i >= 0)
    {
        int sum = a[i] + carry;
        ans = to_string(sum % 10) + ans;
        carry = sum / 10;
        i--;
    }

    while (j >= 0)
    {
        int sum = b[j] + carry;
        ans = to_string(sum % 10) + ans;
        carry = sum / 10;
        j--;
    }
    if (carry)
    {
        ans = to_string(carry) + ans;
    }
    int k = 0;
    while (ans[k] == '0')
    {
        ans = ans.substr(1);
    }

    return ans;
}

int main()
{
    int a[] = {9, 5, 4, 9};
    int n = 4;
    int b[] = {2, 1, 4};
    int m = 3;
    string ans = calc_Sum(a,n,b,m);
    cout << ans ;
}

//Output
// 9763