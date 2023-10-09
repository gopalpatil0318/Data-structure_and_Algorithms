#include<iostream>
using namespace std;

//Numeric hollow halp piramid

int main()
{
    int row;
    cout << "Enter rows: ";
    cin >> row;

    for(int i=0;i<row;i++)
    {
        if(i==0 || i==row-1)
        {
            for(int j=0;j<=i;j++)
            {
                cout << j+1 << " ";
            }
        }
        else
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0 || j==i)
                {
                    cout << j+1 << " ";
                }
                else
                {
                    cout << "  ";
                }
            }
        }
        cout << endl;
    }
}

//output
// Enter rows: 5
// 1
// 1 2
// 1   3
// 1     4
// 1 2 3 4 5