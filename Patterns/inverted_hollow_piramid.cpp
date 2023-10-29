#include <iostream>
using namespace std;



//Inverted Hollow Piramid
int main()
{
    int row;
    cout << "enter the number of rows = ";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        for (int j = 0; j < row - i; j++)
        {
            if (j == 0 || j == row - i - 1)
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
    return 0;
}

//Output
// enter the number of rows = 10
// *                 *
//  *               *
//   *             *
//    *           *
//     *         *
//      *       *
//       *     *
//        *   *
//         * *
//          *