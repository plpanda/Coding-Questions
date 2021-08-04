//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minP = prices[0], profit = 0, n = prices.size();
        for(int i = 1; i < n; ++i){
            if(prices[i] < minP)
                minP = prices[i];
            else if(prices[i] - minP > profit)
                profit = prices[i] - minP;
        }
        return profit;
    }
};