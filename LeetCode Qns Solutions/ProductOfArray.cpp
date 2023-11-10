//https://leetcode.com/problems/product-of-array-except-self/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> p1, p2, ret;
        int n = nums.size();
        p1.push_back(nums[0]);
        p2.push_back(nums[n-1]);
        for(int i = 1; i < n; ++i){
            p1.push_back(p1.back() * nums[i]);
            p2.push_back(p2.back() * nums[n-1-i]);
        }
        
        reverse(p2.begin(), p2.end());
        ret.push_back(p2[1]);
        for(int i = 1; i < n-1; ++i)
            ret.push_back(p1[i - 1] * p2[i+1]);
        ret.push_back(p1[n-2]);

        return ret;
    }
};