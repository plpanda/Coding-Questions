//https://leetcode.com/problems/majority-element-ii/
class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> h;
        for(auto a:nums)
            h[a]++;
        vector<int> a;
        int l = nums.size()/3;
        for(auto i:h)
            if(i.second > l)
                a.push_back(i.first);        
        return a;
    }
	vector<int> majorityElement2(vector<int>& nums) {
        int c1 = 0, c2 = 0, n1, n2;
        int l = nums.size()/3;
        for(auto a:nums){
            if(c1 == 0 && n2 != a){
                n1 = a;
                c1++;
            }else if(c2 == 0 && n1 != a){
                n2 = a;
                c2++;
            }else if(n1 == a){
                c1++;
            }else if(n2 == a){
                c2++;
            }else{
                c1--;
                c2--;
            }
        }
        c1 = 0, c2 = 0;
        for(auto a:nums)
            if(n1 == a)
                c1++;
            else if(n2 == a)
                c2++;
        vector<int> a;   
        if(c1 > l)
            a.push_back(n1);
        if(c2 > l)
            a.push_back(n2);     
        return a;
    }
};