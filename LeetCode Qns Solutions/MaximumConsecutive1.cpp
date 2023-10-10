//https://leetcode.com/problems/max-consecutive-ones/
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maxn = 0, k = 0;
        for(auto n : nums){
            if(n)
                k++;
            else{
                maxn = max(maxn, k);
                k = 0;
            }
        }
        return max(maxn, k);
    }
};