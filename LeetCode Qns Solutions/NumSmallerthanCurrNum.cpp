//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/submissions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> sums(101,0), ret(n,0);
        for(int i = 0; i < n; ++i)
            sums[nums[i]]++;
        for(int i = 1; i < 100; ++i)
            sums[i] += sums[i-1];
        for(int i = 0; i < n; ++i)
            if(nums[i] != 0)
                ret[i] = sums[nums[i]-1];
        return ret;
    }
};