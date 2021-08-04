//https://leetcode.com/problems/valid-parentheses/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        stack<int> st;
        int n = s.size();
        for(int i = 0; i < n; ++i)
            if(s[i] == '{' || s[i] == '[' || s[i] == '('){
                st.push(s[i]);
            }else{
                if(st.size() < 1)
                    return false;
                char ch = st.top();
                if((ch == '[' && s[i] == ']') || (ch == '{' && s[i] == '}')
                   || (ch == '(' && s[i] == ')')){
                    st.pop();
                }else{
                    return false;
                }
            }
        return (st.size() == 0);
    }
};