#include <bits/stdc++.h>
using namespace std;

void fourSum(int arr[], int n, int target){
    sort (arr, arr + n);
    int count = 0;
    for (int i = 0; i <= n - 4; i++){
        for (int j = i + 1; j <= n - 3; j++){
            int k = target - (arr[i] + arr[j]),
                low = j + 1, high = n - 1;
 
            while (low < high){
                if (arr[low] + arr[high] < k){
                    low++;
                }else if (arr[low] + arr[high] > k){
                    high--;
                }else{
                    cout<<arr[i]<<" "<<arr[j]<<" "<<arr[low]<<" "<<arr[high]<<"\n";
                    count++;
                    low++, high--;
                }
            }
        }
    }
    cout<<"Count : "<<count;
}
 
int main()
{
    int arr[] = {1,2,3,-6,-1,-2};
    int sum = 0, n = 6; 
    fourSum(arr, n, sum);
 
    return 0;
}