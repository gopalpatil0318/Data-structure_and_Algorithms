// solid diamond
// Program

#include<iostream>
using namespace std;

int main(){
   int row;
   cout << "Enter number of rows = ";
   cin >> row;
   for(int i =0;i<row/2;i++)
     {
       for(int j=0;j<(row/2)-i-1;j++)
         {
           cout << " ";
         }
       for(int j=0;j<=i;j++)
         {
           cout << "* ";
         }
       cout << endl;
     }

   for(int i = 0;i<row/2;i++)
     {
       for(int j = 0 ;j<i;j++)
         {
           cout << " ";
         }
       for(int j = 0;j<(row/2)-i;j++)
         {
           cout << "* ";
         }
       cout << endl;
     }
}


// Output
// Enter number of rows = 10
//     *
//    * *
//   * * *
//  * * * *
// * * * * *
// * * * * *
//  * * * *
//   * * *
//    * *
//     *