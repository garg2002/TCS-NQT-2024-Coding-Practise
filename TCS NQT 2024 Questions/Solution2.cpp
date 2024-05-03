#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "enter the number: ";
    cin >> n;

    int arr[n];
    cout << "Enter the element in an array: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int target;
    cout << "enter the target value: ";
    cin >> target;

    // for(int i=0;i<n;i++)
    // {
    // int CountSubArray = 0;
    //     for(int j=i;j<n;j++)
    //     {
    //         CountSubArray+=arr[j];

    //         if(CountSubArray == target)
    //         {
    //             count++;
    //         }
    //     }
    // }

    // Optimized Code
    unordered_map<int, int> mpp;
    mpp[0] = 1;
    int preSum = 0, cnt = 0;
    for (int i = 0; i < n; i++)
    {
        preSum += arr[i];
        int remove = preSum - target;
        cnt += mpp[remove];
        mpp[preSum] += 1;
    }

    cout << "Result:" << cnt << endl;
    return 0;
}