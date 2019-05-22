#include<stdio.h>
#include<string.h>
void reverse(char *str)
{
	int n = strlen(str);
	int i;
	for(i=0;i<n;i++)
	{
		printf("%c",str[i]);
	}
	printf("\t");
}
int main()
{
	char input[1000];
	printf("Enter the Input Character:\n");
	scanf("%[^\n]s",input);
	int i,j,len = strlen(input);
	char buff[20];
	for(i=len-1,j=0;input[i]!='\0';i--)
	{
		if(input[i]!=' ')
		{
			buff[j] = input[i];
			j++;
		}
		else
		{
			buff[j]='\0';
			reverse(buff);
			j=0;
		}
	}
	reverse(buff);
	return 0;
}
