#https://leetcode.com/problems/sort-array-by-parity/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int ei = -1, tmp;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i]%2 == 0){
                tmp = nums[i];
                nums[i] = nums[++ei];
                nums[ei] = tmp;
            }
        }
        return nums;
    }
	vector<int> sortArrayByParity2(vector<int>& nums) {
        int ei = -1, tmp;
        for(int i = 0; i < nums.size(); ++i){
            if(nums[i]%2 == 0)
                std::swap(nums[i], nums[++ei]);
        }
        return nums;
    }
};