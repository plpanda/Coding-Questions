//https://leetcode.com/problems/backspace-string-compare/submissions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string s1 = "", s2 = "";
        int n = s.size(), m = t.size();
        for(int i = 0; i < n; ++i)
            if(s[i] != '#')
                s1 += s[i];
            else if(s1.size()) 
                s1.pop_back();
        for(int i = 0; i < m; ++i)
            if(t[i] != '#')
                s2 += t[i];
            else if(s2.size()) 
                s2.pop_back();
        return s1 == s2;
    }
};