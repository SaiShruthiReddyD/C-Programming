#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],c[3][3],i,j;
	printf("Read the elements into a");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		scanf("%d",&a[i][j]);
	}
	}
	printf("Read the elements into b");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		scanf("%d",&b[i][j]);
	}
	}
	printf("Addition of two matrices");
	for(i=0;i<3;i++)
	{
	for(j=0;j<3;j++)
	{
		c[i][j]=a[i][j]+b[i][j];
	}
	printf("\n");
}
printf("%d\t",c[i][j]);
}
