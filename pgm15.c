#include<stdio.h>
int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	int i,j,k;
	int m=0;
	for(i=0;i<n;i++)
	{
		m=1+i;
		for(j=0;j<n;j++)
		{
			if(m<n)
			{
				printf("%d",m);
				m=m+1;
			}
			else
			{
				printf("%d",m);
				m=1;
			}
		}
		printf("\n");
	}
}
