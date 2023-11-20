//https://leetcode.com/problems/container-with-most-water/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxSum = INT_MIN, l = 0, r = height.size()-1;
        while(l < r){
            maxSum = max(maxSum, min(height[r],height[l])*(r-l));
            if(height[r] > height[l])
                l++;
            else
                r--;
        }
        return maxSum;
    }
};