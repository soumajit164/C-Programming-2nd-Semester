#include<stdio.h>
int main()
{
	int n=4;
	int i,j;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-1;j++)
		{
			printf("%d ",i);
		}
		printf("\n");
	}
	return 0;
}
