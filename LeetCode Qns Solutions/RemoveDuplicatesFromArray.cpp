//https://leetcode.com/problems/remove-duplicates-from-sorted-array/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int prev = -101, c = 0;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i] != prev){
                prev = nums[i];
                swap(nums[i], nums[c++]);
            }
        }
        return c;        
    }
	int removeDuplicates2(vector<int>& nums) {
        int c = 1;
        for(int i = 1; i < nums.size(); ++i){
            if(nums[i] != nums[c-1])
                nums[c++] = nums[i];
        }
        return c;        
    }
};