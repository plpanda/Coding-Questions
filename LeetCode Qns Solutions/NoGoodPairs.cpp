//https://leetcode.com/problems/number-of-good-pairs/
class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map <int, int> f;
        for(int i = 0; i < nums.size(); ++i)
            f[nums[i]]++;
        int pairs = 0;
        for(auto x: f)
            pairs += (x.second* (x.second-1))/2;
        return pairs;
    }
	int numIdenticalPairs2(vector<int>& nums) {
        unordered_map <int, int> f;
        int pairs = 0;
        for(auto i:nums)
            pairs += f[i]++;
        return pairs;
    }
};