#include<iostream>
#include<vector>
using namespace std;
vector<int> arr(100,0);
int fibo(int n){
    if(n < 2)
        return n;
    if(arr[n] != 0)
        return arr[n];
    arr[n] = fibo(n-1) + fibo(n-2);
    return arr[n];
}
int main(){
    arr[0] = 0;
    arr[1] = 1;
    cout<<fibo(10);
}