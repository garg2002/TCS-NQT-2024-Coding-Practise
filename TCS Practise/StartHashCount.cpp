#include<iostream>
#include<bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    string str;
    cout<<"Enter the string (which only contains '*' and '#') : ";
    cin>>str;

    int  n = str.length();
    int starCount =0;
    int hashCount =0;

    for(int i=0;i<n;i++)
    {
        if(str[i] == '*')
        starCount++;
        else
        hashCount++;
    }
    cout<<abs(starCount - hashCount );
    return 0;
}