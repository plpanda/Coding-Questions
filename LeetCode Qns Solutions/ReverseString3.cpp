//https://leetcode.com/problems/reverse-words-in-a-string-iii/
class Solution {
public:
    string reverseWords(string s) {
        int si = 0;
        for(int i = 1; i < s.size(); ++i){
            if(s[i] == ' ' || i+1 == s.size()){
                if(i+1 == s.size()) i++;
                if(si != i-1)
                    std::reverse(s.begin()+si, s.begin()+i);
                si = i+1;		
            }
        }
        return s;
    }
};