#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    string reverseOnlyLetters(string s) {
        string str;
        int n = s.size();
        for(int i = n-1; i >= 0; --i)
            if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
                str.push_back(s[i]);
        for(int i = 0; i < n; ++i)
            if(!((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z')))
                str.insert(i,1, s[i]);
        return str;
    }
};