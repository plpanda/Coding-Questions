//https://www.codingninjas.com/studio/problems/sorted-array_6613259
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n = a.size(), m = b.size();
    vector<int> x;
    int i = 0, j = 0;

    while(i < n && j < m){
        if(a[i] == b[j]){
            x.push_back(a[i]);
            while(i < n && a[i] == x.back()) i++;
            while(j < m && b[j] == x.back()) j++;
        }else if(a[i] < b[j]){
            x.push_back(a[i]);
            while(i < n && a[i] == x.back()) i++;
        }
        else if(a[i] > b[j]){
            x.push_back(b[j]);
            while(j < m && b[j] == x.back()) j++;
        }
    }
    while(i < n && a[i] == x.back()) i++;
    while(i < n){
        x.push_back(a[i]);
        while(i < n && a[i] == x.back()) i++;
    }
    while(j < m && b[j] == x.back()) j++;
    while(j < m){
        x.push_back(b[j++]);
        while(j < m && b[j] == x.back()) j++;
    }
    return x;
}
#include<set>
vector < int > sortedArray2(vector < int > a, vector < int > b) {
    set<int> s(a.begin(),a.end());
    for(auto i : b)
        s.insert(i);
    vector<int> x(s.begin(), s.end());
    return x;
}