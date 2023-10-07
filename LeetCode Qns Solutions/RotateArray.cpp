//https://leetcode.com/problems/rotate-array/
class Solution {
public:
	//TLE on large test cases
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n; 
        cout<<"->"<<n<<" "<<k<<" |";
        if(k > n/2)
            LeftRotate(nums, n, n-k);
        else
            RightRotate(nums, n, k);
    }
    void LeftRotate(vector<int>& nums, int n, int k){
        for(int i = 0; i < k; ++i)
            for(int j = 1; j < n; ++j)
                swap(nums[j-1], nums[j]);
    }
    void RightRotate(vector<int>& nums, int n, int k){
        for(int i = 0; i < k; ++i)
            for(int j = n-1; j > 0; --j)
                swap(nums[j-1], nums[j]);
    }
	void rotate2(vector<int>& nums, int k) {
        int n = nums.size();
        k = k%n;
        reverse(nums.begin(), nums.begin()+(n-k));
        reverse(nums.begin()+(n-k), nums.end());
        reverse(nums.begin(), nums.end());
    }
};