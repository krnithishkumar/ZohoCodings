#include<stdio.h>
#include<string.h>
int topstk=-1;
void push(char *in,int n,char t)
{
	topstk++;
	in[topstk] = t;
	//printf("Element pushed");
}
char top(char *in)
{
	return in[topstk--];	
}
/*void pop()
{
	topstk--;
}*/
int main()
{
	char input[20];
	scanf("%s",input);
	int i,n = strlen(input);
	for(i=0;i<n;i++)
	{
		if(input[i]=='{' || input[i]=='[' )
		{
			push(input,n,input[i]);
		}
		else if(input[i]=='}' || input[i]==']')
		{
			if((input[i]=='}' && top(input)=='{' ) || input[i]==']' && top(input) =='[')
			{
			//		pop();
			}
			else
			{
				printf("Not Matching Brackets..");
				return 0;
			}
		}
	}
	if(topstk==-1)
		printf("Correct Sequence of brackets..!!");
	else
		printf("Excess Brackets..!!");
}
