#include<stdio.h>
void printPattern1(int n){
	int i,j;
	for(i=0;i<n;++i){
		for(j=0;j<=i;++j)
			printf("*");
		printf("\n");
	}
}
void printPattern2(int n){
	int i,j;
	for(i=0;i<n;++i){
		for(j=n-i-1;j>0;--j)
			printf(" ");
		for(j=0;j<=i;++j)
			printf("*");
		printf("\n");
	}
}
void printPattern3(int n){
	int i,j;
	for(i=n;i>0;--i){
		for(j=0;j<i;++j)
			printf("*");
		printf("\n");
	}
}
main(){
	int n = 6; //Take Any input as it is dynamic
	printPattern1(n);
	printPattern2(n);
	printPattern3(n);
}
