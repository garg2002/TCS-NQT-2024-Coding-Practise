#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter any number: ";
    cin>>n;

    int x=n;
    int sum = 0;
    while (n>0)
    {
        int rem = n%10;
        sum = sum  + rem;
        n = n/10;
    }

    if(x%sum==0)
    cout<<"Good Number";
    else
    cout<<"Bad Number";
    
    return 0;
}