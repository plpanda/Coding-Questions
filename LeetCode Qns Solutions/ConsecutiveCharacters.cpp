//https://leetcode.com/problems/consecutive-characters/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxPower(string s) {
        int n = s.size();
        if(n == 1)
            return 1;
        vector<int> arr(26,0);
        int ch = s[0], cnt = 1;
        for(int i = 1; i < n; ++i){
            if(s[i] == ch){
                cnt++;
                arr[ch-97] = max(cnt,arr[ch-97]);
            }
            else{
                arr[ch-97] = max(cnt,arr[ch-97]) ;
                cnt = 1;
                ch = s[i];  
            }
        }
            
        int maxn = -1;
        for(int i = 0; i < 26; ++i)
            maxn = max(maxn, arr[i]);
        return maxn;
    }
};