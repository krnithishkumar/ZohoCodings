#include<stdio.h>
int length(char *str)
{
	int n,i;
	for(i=0;str[i]!='\0';i++)
	{
	}
	return i;
}
int main()
{
	char input[25];
	printf("Enter the String:\n");
	scanf("%s",input);
	int len = length(input);
	char output[len];
	int i,j;
	for(i=0,j=len-1;i<len;i++,j--)
	{
		output[j] = input[i];
	}
	output[len] = '\0'; 
	printf("Reversed string is : %s",output);
	return 0;
}
