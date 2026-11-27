#include<stdio.h>
int main()
{
	int f,c;
	printf("Enter thr temperatue in fareheit:");
	scanf("%",&f);
	c = (f-32)*5/9;
	printf("The temperature in celcius scale if %d",c);
	return 0;
}
