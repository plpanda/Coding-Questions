#include<bits/stdc++.h>
using namespace std;
void findCoordinate(int n, int x[], int l[]){
    int arr[n];
    arr[n-1] = x[n-1] + l[n-1];
    for(int i = n-2; i >= 0; --i){
        int temp = x[i] + l[i];
        arr[i] = (temp >= x[i+1])? max(arr[i+1], temp) : temp;
    }
    for(int i = 0; i < n; ++i){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n = 7, x[] = {5,6,9,11,12,16,20}, l[] = {2,3,1,5,3,1,1};
    findCoordinate(n, x, l);
    return 0;
}
