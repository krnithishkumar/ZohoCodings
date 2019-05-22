#include<stdio.h>
#include<ctype.h>
void myfunction(char *str)
{
	char a;
	int n,i,sum=0;
	while(*str!='\0')
	{
		if(!isdigit(*str))
		{
			a=*str;
			*str++;
		}
		else if(isdigit(*str))
		{
			while(isdigit(*str))
			{
				n = *str-'0';
				sum = (sum*10)+n;
				*str++;
			}
			for(i=0;i<sum;i++)
			{
				printf("%c ",a);
			}
			sum=0;		
		}
		
	}
}
int main()
{
	char input[100];
	printf("Enter the string:\n");
	scanf("%s",input);
	myfunction(input);
	return 0;
}
