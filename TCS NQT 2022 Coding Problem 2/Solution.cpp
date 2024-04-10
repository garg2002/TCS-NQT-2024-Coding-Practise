#include<iostream>
#include<string>
#include<vector>
using namespace std;

vector<int> findOccurence(string &str, char ch)
{
    int First = -1; //First Occurence

    int Last = -1;  //Last Occurence

    for(int i=0;i<str.size();i++)
    {
        if(ch == str[i] && First == -1)
        {
            First = i;
        }

        if(ch==str[i])  //else if(ch == str[i] && First > -1)   
        {
            Last = i;
        }
    }

    //Storing Both Occurence Into An Vector Array
    
        vector<int> arr;
        arr.push_back(First);
        arr.push_back(Last);

        return arr;
}
int main()
{
    string str;
    cout<<"Enter any random String: ";
    cin>>str;
    char ch;
    cout<<"Enter the character : ";
    cin>>ch;

    //For Result
    vector<int> result = findOccurence(str, ch);
    cout<<"Result: "<<result[0]<<" "<<result[1];
    
    return 0;
}