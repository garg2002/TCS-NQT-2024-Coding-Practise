/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cout<<"Enter the number of student";
    cin>>n;
    
    int TotalSum = 0;
    int TotalGrade = 0;

    for(int i=0;i<n;i++)
    {
        string name;
        int age;
        char grade;
        string gender;

        cin>>name>>age>>grade>>gender;

        if(age>20)
        {
            cout<<name<<" ";
        }
       

        if(gender == "Female")
        {
            TotalSum+= grade;
            TotalGrade++;
        }
    }
    
    cout<<endl;
    cout<<TotalSum/TotalGrade;
    
}