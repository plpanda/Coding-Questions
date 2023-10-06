//https://leetcode.com/problems/integer-break/
class Solution {
public:
    int integerBreak(int n) {
        if(n < 4) return n-1;
        int x = n/3, y = n%3;
        if(y == 1) return pow(3, x-1)*4;
        return pow(3,x)*((y==0)?1:y);
    }
};