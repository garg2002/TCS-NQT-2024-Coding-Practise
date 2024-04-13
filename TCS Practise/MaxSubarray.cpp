#include<iostream>
using namespace std;
int maxSubArray(int arr[], int n)
{
    int sum = 0;
    int maxSum = INT16_MIN;

    for(int i=0;i<n;i++)
    {
        sum+=arr[i];

        maxSum = max(maxSum,sum);
        if (sum < 0)
            sum = 0;
    }

    return maxSum;

}

int main()
{
    int n;
    cout<<"Enter the length of an array : ";
    cin>>n;

    int arr[n];
    cout<<"Enter the array elements: ";
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        
    }

    int result = maxSubArray(arr,n);
    cout<<"Max SubArray Sum is : "<<result;

    return 0;
}