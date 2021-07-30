#include<iostream>
using namespace std;
int** arr;
int lcs(string text1, string text2, int i, int j) {
    int m = text1.size(), n = text2.size();

    if(i == 0 || j == 0){
        return 0;
    }
    if(arr[i][j] != -1)
        return arr[i][j];
    
    if(text1[i-1] == text2[j-1]){
        arr[i][j] = 1 + lcs(text1, text2, i-1, j-1);   
        return arr[i][j];
    }else{   
        arr[i][j] = max(lcs(text1, text2, i-1, j), lcs(text1, text2, i, j-1));
        return arr[i][j];
    }
}
int main(){
    string text1 = "hello", text2 = "world";
    int m = text1.size(), n = text2.size();

    arr = new int*[m+1];
    for (int i = 0; i < m+1; i++){
        arr[i] = new int[n+1];
        for (int j = 1; j <= n; j++)
            arr[i][j] = -1;
        arr[i][0] = 0;                
    }
    
    lcs(text1, text2, m, n);
    cout<<arr[m][n];
}