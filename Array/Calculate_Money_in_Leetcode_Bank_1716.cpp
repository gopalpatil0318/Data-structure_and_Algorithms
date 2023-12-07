#include <iostream>
using namespace std;

// 1716. Calculate Money in Leetcode Bank

int totalMoney(int n)
{
    int weeks[] = {1, 2, 3, 4, 5, 6, 7};
    int w = n / 7;
    int r = n % 7;
    int i = 0;
    int sum = 0;
    for (i = 0; i < w; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            sum += weeks[j] + i;
        }
    }

    for (int j = 0; j < r; j++)
    {
        sum += weeks[j] + (i);
    }

    return sum;
}

int main()
{
    int n = 20;
    int ans = totalMoney(n);
    cout << "Total money is : " << ans;
}

//Output 
// Total money is : 96