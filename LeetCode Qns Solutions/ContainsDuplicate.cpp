//https://leetcode.com/problems/contains-duplicate/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> s;
        for(int i : nums){
            if(s[i] >= 1)
                return true;
            s[i]++;
        }
        return false;
    }
    bool containsDuplicate2(vector<int>& nums) {
        unordered_set<int> s;
        for(int i = 0; i < nums.size(); ++i){
            if(s.count(nums[i]) > 0)
                return true;
            s.insert(nums[i]);
        }
        return false;
    }
};