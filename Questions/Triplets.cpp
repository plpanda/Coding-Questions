#include<bits/stdc++.h>
using namespace std;
long triplets(long t, vector<int> d){
    int n = d.size();
    long res = 0;
    sort(d.begin(), d.end());
    for (int i = 0; i <= n - 3; i++){
        int low = i + 1, high = n - 1;
        while (low < high){
            if (d[i] + d[low] + d[high] > t) {
                high--;
            }else{
                for (int x = low + 1; x <= high; x++) 
                    res++;
                low++;
            }
        }
    }
    return res;
}
int main(){
    cout<<triplets(8,{1,2,3,4,5})<<endl;
    cout<<triplets(7,{3,1,2,4})<<endl;
    cout<<triplets(8,{1,2,3,4,6})<<endl;
}