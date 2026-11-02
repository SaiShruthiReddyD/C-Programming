#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the values for a,b,c:");
	scanf("%d%d%d",&a,&b,&c);
	{
	if(a>b && a>c){
		printf("a is maximum\n");
	}
	else if(b>c && b>a){
		printf("b is maximum\n");
	}
	else{
		printf("c is maximum\n");
	}
}
	{
	if(a<b && a<c){
		printf("a is minimum\n");
	}
	else if(b<c && b<a){
		printf("b is minimum\n");
	}
	else{
		printf("c is minimum\n");
	}
}
	return 0;
}
