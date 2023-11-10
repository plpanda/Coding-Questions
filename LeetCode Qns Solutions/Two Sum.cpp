//https://leetcode.com/problems/two-sum/submissions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> n;
        for(int i = 0; i < nums.size(); ++i){
            if(n.contains(target - nums[i]))
                return {n[target - nums[i]], i};
            n[nums[i]] = i;
        }
        return {};
    }
    vector<int> twoSum2(vector<int>& nums, int target) {
        for(int i = 0; i < nums.size(); ++i){
            for(int j = i+1; j < nums.size(); ++j){
                if(nums[i] + nums[j] == target){
                    return {i, j};
                }
            }
        }
        return {};
    }
    vector<int> twoSum1(vector<int>& nums, int target) {
        unordered_map<int, int> s;
        int a,b, n = nums.size();
        for(int i = 0; i < n; ++i)
            s[nums[i]] = i;
        vector<int> x;
        for(int i = 0; i < n; ++i){
            if(s.find(target - nums[i]) != s.end()){
                unordered_map<int,int>:: iterator itr = s.find(target - nums[i]);
                int p2 = itr->second;
                if(i == p2)
                    continue;
                x.push_back(i);
                x.push_back(p2);
                break;   
            }
        }
        return x;
    }
};