//https://leetcode.com/problems/majority-element-ii/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> h;
        for(auto a:nums)
            h[a]++;
        vector<int> a;
        int l = nums.size()/3;
        for(auto i:h)
            if(i.second > l)
                a.push_back(i.first);        
        return a;
    }
};