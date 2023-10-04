//https://leetcode.com/problems/valid-palindrome/
class Solution {
public:
    bool isPalindrome(string s) {
        string str;
        for(auto a:s){
            if(a > 64 && a < 91)
                str.push_back(a+32);
            else if((a >= 'a' && a <= 'z') || (a >= '0' && a <= '9'))
                str.push_back(a);
        }
        int l = str.size();
        for(int i = 0; i < l/2; ++i)
            if(str[i] != str[l-i-1])
                return false;
        return true;
    }
};