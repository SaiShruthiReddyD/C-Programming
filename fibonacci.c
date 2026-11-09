#include<stdio.h>
term(int);
int main(){
	int i,n;
	printf("n:");
	scanf("%d",&n);
	printf("the fibonacci series of %d terms is ",n);
	for(i=1;i=n;i++){
		printf("%d\t",term(i));
	}
}
int a,b;
term(int n){
	if(n==1){
		return 0;
	}
	else if(n==2){
		printf("%d %d",a,b);
	}
	else{
		return(term(n-1)+term(n-2));
	}
	return 0;
}
