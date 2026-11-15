#include<stdio.h>
int main(){
	int n,t,reverse=0,sum=0,rem;
	printf("Enter a number to check whether it is a palindrome");
	scanf("%d",&n);
	t=n;
	while(t!=0){
		rem=t%10;
		sum=sum+rem;
		reverse=(reverse*10)+rem;
		t=t/10;
	}
	if(n==reverse){
		printf("%d is a palindrome number\n",n);
	}
	else{
		printf("%d is not a palindrome number\n",n);
	}
	printf("Individual sum is %d",sum);
	return 0;
}
