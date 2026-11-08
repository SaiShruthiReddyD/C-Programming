#include<stdio.h>
int main(){
	int i,n,cube=1;
	printf("Enter the number for n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
	cube=i*i*i;
	printf("Cube of %d is %d\n",i,cube);
	}
	return 0;
}
