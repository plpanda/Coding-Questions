//https://leetcode.com/problems/pascals-triangle/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ret;
        if(numRows == 0) return ret;
        vector<int> tmp = {1};
        ret.push_back(tmp);
        if(numRows == 1) return ret;
        tmp = {1,1};
        ret.push_back(tmp);
        if(numRows == 2) return ret;
        for(int i = 3; i <= numRows; ++i){
            vector<int> temp2;
        }

    }
};