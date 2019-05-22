#include<stdio.h>
#include<math.h>
#include<string.h>
#include <stdlib.h>
int main()
{
	char str[100];
	printf("Enter the String:\n");
	scanf("%s",str);
	int n = strlen(str);
	double no = sqrt(abs(n));	
	int size = (int)no;
	printf("%d",size);
	size = size+1;
	printf("%d\n",size);
	char arr[size+1][size+1];
	int i,j,k=0;
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			arr[i][j] = str[k];
			k++;
		}
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			printf("%c ",arr[i][j]);
		}	
		printf("\n");
	}
	for(i=0;i<size;i++)
	{
		for(j=0;j<size;j++)
		{
			if(arr[i][j]=='T' && arr[i][j+1]=='O' && arr[i][j+2]=='O')
			{
				printf("START INDEX is < %d , %d >\n",i,j);
				printf("END INDEX is < %d , %d >\n",i,j+2);
			}
			if(arr[i][j]=='T' && arr[i+1][j]=='O' && arr[i+2][j]=='O')
			{
				printf("START INDEX is < %d , %d >\n",i,j);
				printf("END INDEX is < %d , %d  >\n",i+2,j);
			}
		}
	}
	return 0;
}
