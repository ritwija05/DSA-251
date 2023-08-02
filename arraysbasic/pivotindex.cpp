#include<iostream>
#include<vector>
using namespace std;
int pivotindex(vector<int> &nums)
{
    int leftsum=0;
    int rightsum=0;
    //for total sum
    for (int i=0;i<nums.size();i++)
    {
        rightsum=rightsum+nums[i];
    }
    //pivot index
    for (int i=0;i<nums.size();i++)
    {
        //In each iteration of the second loop,
        // it subtracts the current number from rightSum because we want 
        //to consider the sum of elements on the 
        //right side of the current index.
        rightsum=rightsum-nums[i];
        if(leftsum==rightsum)
        return i;
        leftsum=leftsum+nums[i];
    }
    return -1;
}
