//https://leetcode.com/problems/132-pattern/
class Solution {
public:
    bool find132pattern(vector<int>& nums) {
        if(nums.size() < 3) return false;
        
        vector<int> stack;
        int min = INT_MIN;

        for(int i = nums.size()-1; i>=0; --i){
            if(nums[i] < min) return true;
            while(!stack.empty() && nums[i] > stack.back()){
                min = stack.back();
                stack.pop_back();
            }
            stack.push_back(nums[i]);
        }
        return false;
    }
};