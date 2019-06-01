#include<stdio.h>
#include<string.h>
void strRevAB(char str[],int a,int b){
	char t;
	while(a<b){
		t = str[a];
		str[a] = str[b];
		str[b] = t;
		a++;  b--;
	}
}
int checkPallindrome(char str[],int a,int b){
	int val = 1;
	while(a<b){
		if(str[a] != str[b]){
			val = 0;
			break;
		}
		a++;  b--;
	}
	return val;	
}
main(){
	int n,i,j,k,l;
	char str[50],str2[50];
	scanf("%s",str);
	scanf("%d",&n);
	while(n--){
		scanf("%d %d %d %d",&i,&j,&k,&l);
		strcpy(str2,str);
		strRevAB(str2,i-1,j-1);
		checkPallindrome(str2,k-1,l-1)?printf("Yes"):printf("No");
	}
}
