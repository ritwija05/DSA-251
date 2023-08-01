
#include<iostream>
#include<vector>
using namespace std;
 void rotate(vector<int>& nums, int k) 
 {
    int n=nums.size();
    reverse(nums.begin(),nums.end());//Reverse the entire vector
    reverse(nums.begin(),nums.begin()+k);//Reverse till k elements
    reverse(nums.begin()+k,nums.end());//Reverse the remaining elements
 }
 int main()
 {
    cout<<"Success";
 }