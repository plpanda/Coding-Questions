//https://leetcode.com/problems/majority-element/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int m = 0, cnt = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(cnt == 0){
                cnt = 1;
                m = nums[i];
            }
            else{
                if(m == nums[i])
                    cnt++;
                else
                    cnt--;
            }
        }
        return m;
        
    }
};