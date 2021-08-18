//https://leetcode.com/problems/path-crossing/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPathCrossing(string path) {
        set<pair<int, int>> s;
        pair<int, int> p = {0,0};
        s.insert(p);
        int n = path.size();
        for(int i = 0; i < n; ++i){
            switch(path[i]){
                case 'N': p.second += 1; break;
                case 'S': p.second -= 1; break;
                case 'E': p.first += 1; break;
                case 'W': p.first -= 1; break;
            }
            if(s.find(p) != s.end())
                return true;
            s.insert(p);
        }
        return false;
    }
};