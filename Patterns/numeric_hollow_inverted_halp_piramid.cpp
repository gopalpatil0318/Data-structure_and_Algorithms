#include <iostream>
using namespace std;

// Numeric hollow inverted halp piramid

int main()
{
    int row;
    cout << "Enter rows: ";
    cin >> row;

    for (int i = 0; i < row; i++)
    {
        for (int j =i; j <row; j++)
        {
         if(i==0 || j == i || j == row-1)
            cout << j+1;
        else
        {
        cout << " ";
        }
         
        }
        
          cout << endl;
    }
  
}

// output
// Enter rows: 5
// 12345
// 2  5
// 3 5
// 45
// 5