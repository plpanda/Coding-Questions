//https://leetcode.com/problems/palindrome-number/
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0 || (x != 0 && x % 10 == 0)) return false;
        if(x < 10) return true;
        long y = 0;
        int z = x;
        while(x > 0){
            y = y*10 + (x%10);
            x = x/10;
        }
        return (y == z)?true:false;
    }
};