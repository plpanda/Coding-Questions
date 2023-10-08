//https://leetcode.com/problems/maximum-value-of-an-ordered-triplet-i/
class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {
        int n = nums.size();
        vector<int> lm, rm;
        lm.push_back(nums[0]);
        rm.push_back(nums[n-1]);
        for(int i = 1; i < n; ++i){
            lm.push_back(max(nums[i], lm[i-1]));
            rm.push_back(max(nums[n-1-i], rm[i-1]));
        }
        reverse(rm.begin(), rm.end());
        long long max = INT_MIN;
        for(int i = 1; i < n-1; ++i){
            max = std::max(max, (long long)(lm[i-1]-nums[i])*rm[i+1]);
        }
        return max < 0 ? 0 : max;
    }
};