#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter the number for n:");
	scanf("%d",&n);
	for(i=2;i<n;i++)
	{
		if(n%i==0)
		{
			printf("Not a Prime Number\n");
		}
		else 
		{
			printf("Prime Number\n");
		}
	}
	return 0;
}
