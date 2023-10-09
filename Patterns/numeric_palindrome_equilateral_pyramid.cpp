#include <iostream>
using namespace std;

// Numeric hollow inverted halp piramid

int main()
{
    int row,c;
    cout << "Enter rows: ";
    cin >> row;
    int k = row;

    for (int i = 0; i < row; i++)
    {
        c=1;
        for(int j=0;j<k;j++)
        {
            if(j<row-i-1)
            {
                cout << " ";
            }
            else if(j<=row-1)
            {
                cout << c;
                c++;
            }
            else if(j == row)
            {
                c = c-2;
                cout << c;
                c--;
            }
            else
            {
                cout << c;
                c--;
            }
        }
         
        k++;
        cout << endl;
    }
  
}

// output
// Enter rows: 5
//     1
//    121
//   12321
//  1234321
// 123454321