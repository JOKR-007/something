// send arr(int) as a parremter
#include<iostream>
using namespace std;
//declure a function

int avgArray(int *arr);
int sum(int *arr);
int main()
{
int arra[]= {5,8,0,654,65,466,4};
cout<< avgArray(arra)<<endl;

cout<< sum(arra) << endl;
    return 0;
}

int avgArray(int *arr)
{
    int r;
    int si = sizeof(arr) / sizeof(arr[0]);
    
    r = sum(arr)/si;
    
    return r;
}

int sum(int arr)
{
    int si = sizeof(arr) / sizeof(arr[0]);
    int r =0;
    for(int i = 0 ; i<=si;i++)
        r += arr[i]; 
    return r;
}
