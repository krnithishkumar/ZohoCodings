#include<stdio.h>
#include<string.h>
int main()
{
	char input[20];
	printf("Enter the input string:\n");
	scanf("%s",input);
	int n = strlen(input);
	int m = n-1;
	int i,j,k=0,blk,blk2;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i==j)
			{
				printf("%c",input[k++]);
				
			}
			else if(i+j+1 == n)
			{
				printf("%c",input[m--]);
			}
			else
			{
				printf(" ");
			}
		}
		printf("\n");
	}
}
