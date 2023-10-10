//https://leetcode.com/problems/missing-number/
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size(), sum = (n*(n+1))/2;
        for(auto a : nums)
            sum -= a;
        return sum;
    }
};