//https://leetcode.com/problems/house-robber/submissions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    //approach 2 : faster
    int rob2(vector<int>& nums) {
        int n = nums.size();
        if(n == 0)
            return 0;
        if(n == 1)
            return nums[0];
        if(n == 2)
            return max(nums[0], nums[1]);
        if(n == 3)
            return max(nums[0]+nums[2], nums[1]);
        
        int s1 = nums[0], s2 = nums[1], s3 = nums[0] + nums[2], temp;
        
        for(int i = 3; i < n; ++i){
            temp = max(s1, s2) + nums[i];
            s1 = s2;
            s2 = s3;
            s3 = temp;
        }
        return max(s2, s3);
    }
    //Approach 1 
    int rob(vector<int>& nums) {
        int n = nums.size();
        int sums[n + 1];
        
        for(int i = 0; i < n; ++i){
            if(i <= 1)
                sums[i] = nums[i];
            else if(i == 2)
                sums[i] = nums[i] + sums[0];
            else
                sums[i] = max(sums[i-2], sums[i-3]) + nums[i];
        }
        if(n == 0)
            return 0;
        if(n == 1)
            return nums[0];
        return max(sums[n-1], sums[n-2]);
    }
};