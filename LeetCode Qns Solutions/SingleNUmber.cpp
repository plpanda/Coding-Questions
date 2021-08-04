//https://leetcode.com/problems/single-number/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = 0, s = nums.size();
        while(s--)
            n ^= nums[s];
        return n;
    }
};