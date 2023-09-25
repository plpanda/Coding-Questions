#https://leetcode.com/problems/reverse-integer/
class Solution {
public:
    int reverse(int x) {
      long k = 0, neg = (x < 0)?-1:1;
      x = x*neg;
      while(x > 0){
        if(k*10 > INT_MAX)
          return 0;
        k = k*10 + x%10;
        x /= 10;
      }
      return k*neg;
    }
};