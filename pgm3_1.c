#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
	char input[100],temp;
	printf("Enter the String :\n");
	scanf("%[^\n]s",input);
	int st=0;
	int en=strlen(input);
	printf("%d",en); 
	while(st<en)
	{
		if(!(isalpha(input[st])) || (input[en]==' ')  )
		{
			st++;
		}
		if(!(isalpha(input[en])) || (input[en]==' ') )
		{
			en--;
		}
		else
		{
			temp = input[st];
			input[st] = input[en];
			input[en] = temp;
			st++;
			en--;
		}
	}
	printf("\n%s",input);
	return 0;
}
