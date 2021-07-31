#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int knapsack(int val[], int wt[], int W, int n){
    if(n == 0 || W == 0)
        return 0;
    if(wt[n] > W)
        return knapsack(val, wt, W, n-1);
    return max(knapsack(val, wt, W, n-1), knapsack(val, wt, W-wt[n], n-1) + val[n]);
}
int main(){
    int val[] = { 60, 100, 120 };
    int wt[] = { 10, 20, 30 };
    int W = 50;
    int n = sizeof(val) / sizeof(val[0]);

    cout<<knapsack(val, wt, W, n-1);
    return 0;
}