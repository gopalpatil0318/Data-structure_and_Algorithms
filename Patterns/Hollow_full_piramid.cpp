// Hollow full piramid
// Program

#include<iostream>
using namespace std;

int main(){
     
    int row;
    cout << "Enter the row = ";
    cin >> row;
    for(int i = 0; i<row;i++)
      {
        for(int j=0; j<row-i-1;j++)
          {
            cout << " ";
          }
        for(int j = 0;j<=i;j++)
          {
        if(j==0 || j == i)
        {
          cout << "* ";
        }
        else
        {
          cout << "  ";
        }

  }
        cout << endl;
      }

}


// Output
// Enter the row = 5
//     *
//    * *
//   *   *
//  *     *
// *       *