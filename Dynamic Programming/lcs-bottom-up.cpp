#include<iostream>
using namespace std;
int longestCommonSubsequence(string text1, string text2) {
    int m = text1.size(), n = text2.size();
    
    int** arr = new int*[m+1];
    for (int i = 0; i < m+1; i++)
        arr[i] = new int[n+1];

    for (int i = 0; i <= m; i++)
        for (int j = 0; j <= n; j++){
            if(i == 0 || j == 0)
                arr[i][j] = 0;
            else if(text1[i-1] == text2[j-1])
                arr[i][j] = arr[i-1][j-1] + 1;
            else
                arr[i][j] = max(arr[i-1][j], arr[i][j-1]);
        }
    return arr[m][n];
}
int main(){
    cout<<longestCommonSubsequence("hello","world");
}