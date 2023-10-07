//https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/
class Solution {
public:
    bool check(vector<int>& nums) {
        int c = 0, i=1;
        for(; i < nums.size(); ++i){
            if(nums[i-1] > nums[i])
                c++;
        }
        if(nums[i-1] > nums[0])
            c++;
        return c <= 1;
    }
};