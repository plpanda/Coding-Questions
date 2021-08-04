//https://leetcode.com/problems/two-sum/submissions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
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