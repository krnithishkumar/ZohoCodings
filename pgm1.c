#include<stdio.h>
int main()
{
	int n;
	printf("Enter the N value :\n");
	scanf("%d",&n);
	int i,j,k;
	for(i=0;i<=n;i++)
	{
		if(n>i)
			printf("%*c",n-i,' ');
		if(i==0)
		{
			printf("0");
		}
		else
		{
			for(k=n-i+1;k<=n;k++)
			{
				printf("%d",k);
			}
			printf("0");
			for(k=n;k>n-i;k--)
			{
				printf("%d",k);
			}
		}
		printf("\n");
	}
	return 0;
}
