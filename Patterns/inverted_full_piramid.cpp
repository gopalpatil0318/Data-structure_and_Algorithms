// inverted full pyramid
// Program

#include<iostream>
using namespace std;

int main(){
   int row;
   cout << "Enter the rows = ";
   cin >> row;

  for(int i = 0; i<row;i++)
    {
      for(int j = 0;j<i;j++)
        {
          cout << " ";
        }
      for(int j = 0;j<row-i;j++)
        {
          cout << "* ";
        }
      cout << endl;
    }
}


// Output
// Enter the rows = 5
// * * * * * 
//  * * * * 
//   * * *
//    * *
//     *