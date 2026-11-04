#include<stdio.h>
void main()
{
	int a[2][2]={{21,51},{1,2}},i,j;
	printf("Display the element form two dimensonal array");
	for(i=0;i<2;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}
