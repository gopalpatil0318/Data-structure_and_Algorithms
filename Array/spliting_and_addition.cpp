#include <iostream>
using namespace std;

int main()
{
    int num;
    cin >> num;
    if(num%9==0){
        cout<<9;
    }
    else{
        cout<<num%9;
    }

}