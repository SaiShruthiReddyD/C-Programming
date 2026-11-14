#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the number for a,b:");
	scanf("%d%d",&a,&b);
	printf("Addition is:%d\n",a+b);
	printf("Subtraction is:%d\n",a-b);
	printf("Multiplication is:%d\n",a*b);
	printf("Division is:%d\n",a/b);
	printf("Modulus is:%d\n",a%b);
	printf("Greater is:%d\n",a>b);
	printf("Lesser is:%d\n",a<b);
	printf("Equal to is:%d\n",a==b);
	printf("Not Equal to is:%d\n",a!=b);
	printf("Post Increment is:%d\n",a++);
	printf("Pre Increment is:%d\n",++a);
	printf("Post Decrement is:%d\n",a--);
	printf("Pre Decrement is:%d\n",--a);
	printf("Bitwise OR is:%d\n",a|b);
	printf("Bitwise AND is:%d\n",a&b);
	printf("Bitwise NOT is:%d\n",~a);
	return 0;
}
