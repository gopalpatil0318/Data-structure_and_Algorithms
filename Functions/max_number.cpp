// find max number
#include<iostream>
using namespace std;

int findMax(int a,int b,int c){
    // first way
    // if(a>b && a>c){
    //     return a;
    // }
    // else if(b>a && b>c)
    // {
    //     return b;
    // }
    // else{
    //     return c;
    // }


    // second way
    int ans = max(max(a,b),c);
    return ans;
    
}

int main(){
    int num1,num2,num3,ans;
    cout << "Enter the number num1: ";
    cin >> num1;
    cout << "Enter the number num2: ";
    cin >> num2;
    cout << "Enter the number num3: ";
    cin >> num3;

    ans = findMax(num1,num2,num3);

    cout << "Max number is: " << ans << endl;

    return 0;
}

// output:
// Enter the number num1: 12
// Enter the number num2: 45
// Enter the number num3: 23
// Max number is: 45
