#include<stdio.h>
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}
main(){
	int arr[50],i,n,j=0;
	scanf("%d",&n);
	for(i=0;i<n;++i)
		scanf("%d",arr+i);
	i=-1;
	while(j!=n)
		if(arr[j++]%2 != 0)
			swap(&arr[++i],&arr[j-1]);
	swap(&arr[n-1],&arr[i+1]);
	for(i=0;i<n;++i)
		printf("%d ",arr[i]);
}
