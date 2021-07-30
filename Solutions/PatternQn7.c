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
void printPattern4(int n){
	int i,j;
	for(i=n;i>0;--i){
		for(j=0;j<n-i;++j)
			printf(" ");
		for(j=0;j<i;++j)
			printf("*");
		printf("\n");
	}
}
void printPattern5(int n){
	int i,j;
	for(i=0;i<n;++i){
		for(j=n-i;j>0;--j)
			printf(" ");
		for(j=0;j<=i;++j)
			printf("* ");
		printf("\n");
	}
}
void printPattern6(int n){
	int i,j;
	for(i=0;i<n;++i){
		for(j=0;j<=i;++j)
			printf(" ");
		for(j=n-i;j>0;--j)
			printf("* ");
		printf("\n");
	}
}
void printPattern7(int n){
	int i,j;
	for(i=0;i<n;++i){
		for(j=0;j<=i;++j)
			printf("*");
		for(j=n-i-1;j>0;--j)
			printf("  ");
		for(j=0;j<=i;++j)
			printf("*");
		printf("\n");
	}
}
void printPattern8(int n){
	int i,j;
	for(i=0;i<n;++i){
		for(j=n-i;j>0;--j)
			printf("*");
		for(j=0;j<i;++j)
			printf("  ");
		for(j=n-i;j>0;--j)
			printf("*");
		printf("\n");
	}
}
main(){
	int n = 6; //Take Any input as it is dynamic
	printPattern1(n);	printf("\n");
	printPattern2(n);	printf("\n");
	printPattern3(n);	printf("\n");
	printPattern4(n);	printf("\n");
	printPattern5(n);	printf("\n");
	printPattern6(n);	printf("\n");
	printPattern7(n);	printf("\n");
	printPattern8(n);	printf("\n");
}
