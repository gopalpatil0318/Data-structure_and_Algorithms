#include <iostream>
using namespace std;

// Hollow Diamond Inscribed in a Rectangle


int main()
{

    int row;
    cout << "enter the number of rows = ";
    cin >> row;
    row = row / 2;

    for (int i = 0; i < row; i++)
    {

        for (int j = 0; j < row - i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j < row - i; j++)
        {
            cout << "*";
        }

        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        for (int j = 0; j < row * 2 - i * 2 - 1; j++)
        {
            cout << " ";
        }

        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}




//Output
// enter the number of rows = 10
// ***** *****
// ****   ****
// ***     ***
// **       **
// *         *
// *         *
// **       **
// ***     ***
// ****   ****
// ***** *****