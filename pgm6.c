#include<stdio.h>
#include<string.h>
int main()
{
	char input[20];
	printf("Enter the brackets:\n");
	scanf("%s",input);
	int len = strlen(input);
	int brackets = 0;
	int i;
       	for(i=0;i<len;i++)
	{
		if(brackets<0)
		{
			goto label;
		}
		if((input[i]=='{') || (input[i]=='('))
		{
			brackets = brackets+1;
			printf("%d\n",brackets);
		}
		if((input[i]=='}') || (input[i]==')'))
		{
			brackets = brackets - 1;
			printf("%d\n",brackets);
		}
	}
	printf("%d\n",brackets);
	if(brackets==0)
	{
		printf("Valid Brackets..!!");
	}	
	else
	{
	label:	printf("Invalid Brackets..!!");
	}
	return 0;
}
