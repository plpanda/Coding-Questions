//https://leetcode.com/problems/move-zeroes/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int zc = 0, n = arr.size();
        for(int i = 0; i < n; ++i){
            if(arr[i] == 0)
                zc++;
        }
        remove(arr.begin(), arr.end(), 0);
        for(int i = n-zc; i < n; ++i)
            arr[i] = 0;
    }
	void moveZeroes2(vector<int>& nums) {
        int v = -1;
        for(int i = 0; i < nums.size(); ++i)
            if(nums[i] != 0)
                swap(nums[i], nums[++v]);
    }
};