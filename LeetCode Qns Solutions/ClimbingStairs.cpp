//https://leetcode.com/problems/climbing-stairs/
class Solution {
public:
    int climbStairs(int n) {
        if(n <= 2)
            return n;
        long long int n1 = 1, n2 = 2, tmp;
        for(int i = 3; i <= n; ++i){
            tmp = n1+n2;
            n1 = n2;
            n2 = tmp;
        }
        return n2;
    }
};