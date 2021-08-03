//https://leetcode.com/problems/last-stone-weight/
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        if(n == 0)
            return 0;
        if(n == 1)
            return stones[0];
        if(n == 2)
            return abs(stones[0] - stones[1]);
        //By default this creates max heap
        priority_queue <int> pq;
        int a, b;
        for(int i = 0; i < n; ++i)
            pq.push(stones[i]);
        
        while(pq.size() > 1){
            a = pq.top();
            pq.pop();
            b = pq.top();
            pq.pop();
            if(a-b != 0)
                pq.push(a-b);
        }
        return (pq.size() == 0)? 0 : pq.top();
    }
};