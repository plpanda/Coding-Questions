#include<bits/stdc++.h>
using namespace std;
int minMoves(vector<int> arr){
    int n = arr.size(), no = 0, j = 0, no1 = 0, k = 0;
    for(int i = 0; i < n; ++i){
        if(arr[i] == 0)
            no += i - j++;
        else
            no1 += i - k++;
    }
    return min(no, no1);
}
int main(){
    cout<<minMoves({0,1,0,1})<<endl;
    cout<<minMoves({1,1,1,1,0,0,0,0})<<endl;
    
    cout<<minMoves({1,0,1,0,0,0,0,1})<<endl;
}
