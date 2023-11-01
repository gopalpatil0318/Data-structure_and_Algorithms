#include<iostream>
#include<vector>
using namespace std;

//Transpose 2D Array
void transposeArray(vector<vector<int> >& arr)
{
    int n = arr.size();
    for(int i=0; i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            swap(arr[i][j],arr[j][i]);
        }
    }
}

int main()
{
    vector<vector<int> >arr = {{1,2,3},{4,5,6},{7,8,9}};
    transposeArray(arr);

    for(auto li:arr)
    {
        for(auto k:li)
        {
            cout << k << " ";
        }
        cout << endl;
    }

}

//Output
// 1 4 7 
// 2 5 8
// 3 6 9