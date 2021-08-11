//https://leetcode.com/problems/monotonic-array/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isMonotonic(vector<int>& arr) {
        bool incr = true, decr = true;
        int n = arr.size();
        for(int i = 1; i < n; ++i){
            if(arr[i] > arr[i-1])
                decr = false;
            else if(arr[i] < arr[i-1])
                incr = false;
        }
        return incr || decr;
    }
    bool isMonotonic2(vector<int>& nums) {
        int i, n = nums.size();
        for(i = 1; i < n && nums[i] == nums[i-1]; ++i);
        if(i == n)
            return true;
        bool mono = true;
        if(nums[i] > nums[i-1]){
            while(i < n && nums[i] >= nums[i-1])
                i++;
            if(i == n)
                return true;
        }else{
            while(i < n && nums[i] <= nums[i-1])
                i++;
            if(i == n)
                return true;
        }
        return false;
    }
};