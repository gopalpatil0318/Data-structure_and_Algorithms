#include <iostream>
#include <vector>

using namespace std;

int main()
{

    // Creating a jagged array using in vector

    vector<vector<int>> arr;

    vector<int> vect1(10, 0);
    vector<int> vect2(7, -1);
    vector<int> vect3(8, 0);
    vector<int> vect4(5, -1);
    vector<int> vect5(20, 0);

    //pushing above 1D vectors in main vector
    arr.push_back(vect1);
    arr.push_back(vect2);
    arr.push_back(vect3);
    arr.push_back(vect4);
    arr.push_back(vect5);

    //retrive elements 

    for(auto it:arr)
    {
        for(auto k:it)
        {
            cout << k << " ";
        }
        cout << endl;
    }

    return 0;
}

//output
// 0 0 0 0 0 0 0 0 0 0 
// -1 -1 -1 -1 -1 -1 -1
// 0 0 0 0 0 0 0 0
// -1 -1 -1 -1 -1
// 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0 0