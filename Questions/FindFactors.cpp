#include<bits/stdc++.h>
using namespace std;
int pthfactor(int n, int p){
    vector<int> start, end;
    start.push_back(1);
    end.push_back(n);
    int stop = sqrt(n), i;
    for(i = 2; i <= stop; ++i){
        if(n%i == 0){
            start.push_back(i);
            end.insert(end.begin(), n/i);
        }
    }
    if(start[start.size()-1] == end[0])
        start.insert(start.end(), end.begin()+1, end.end());
    else
        start.insert(start.end(), end.begin(), end.end());
    return (p > start.size()) ? 0 : start[p-1];
}
int main(){
    cout<<pthfactor(20,3);
}