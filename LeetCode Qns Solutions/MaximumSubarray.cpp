//https://leetcode.com/problems/maximum-subarray/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int sum = 0, maxSum = INT32_MIN, n = nums.size();
        for(int i = 0; i < n; ++i){
            sum = max(0, sum) + nums[i];
            maxSum = max(maxSum, sum);
        }
        return maxSum;
    }
};