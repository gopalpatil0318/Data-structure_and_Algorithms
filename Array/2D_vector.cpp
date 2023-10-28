#include<iostream>
#include<vector>
using namespace std;

int main()
{
    //creating a 2D vector
    //Define 2D vector
    vector<vector <int> > v;
    //Define and initialize 2D vector
    vector<vector<int> > arr(5,vector<int>(10,0));

    //Retrive element in Vector
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
// 0 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 0
// 0 0 0 0 0 0 0 0 0 0