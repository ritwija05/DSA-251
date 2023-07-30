#include <iostream> 
#include<vector>
using namespace std;
int findSecondLargest(int n, vector<int> &arr)
{
    // Write your code here.
    int first=INT_MIN;
    int second = INT_MIN;
    for(int i=0;i<arr.size();i++)
    {
        if(arr[i]>first)
        {
            second=first;
            first=arr[i];
        }
        else if(arr[i]>second && arr[i]!=first)
        {
            second =arr[i];
        }
    }
    if(second==INT_MIN)
    {
        return -1;
    } else {
      return second;
    }
}