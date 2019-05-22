#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int getsum(char *t,char *u)
{
	//printf("%s\n",t);
	int a = atoi(t);
	//printf("a=%d\n",a);
	int b = atoi(u);
	//printf("b=%d\n",b);
	//printf("ans=%d\n",(a*10)+b);
	return ((a*10)+b);
}
/*void seperate(char *in)
{
	while(*in!='\0')
	{
		if()
	}
}*/
int main()
{
	char input[20];
	printf("Enter the string:\n");
	scanf("%s",input);
	int n = strlen(input);
	int i,j=0,k=0;
	char narray[20],carray[20];
	char t[1],u[1];
	int sum=0;
	for(i=0;i<n;i++)
	{
		if(isdigit(input[i]) && isdigit(input[i+1]))
		{
			t[0] = input[i];
			printf("%s",t);
			u[0] = input[i+1];
			sum = getsum(t,u);
			narray[j++] = sum;
			i = i+1;
		}
		else if(isdigit(input[i]))
                {
                        narray[j++] = input[i];
                }
		else
		{
			carray[k++] = input[i];
		}
	}
	carray[k++] = '\0';
	narray[j++] = '\0';
	//for(i=0;carray[i]!='\0';i++)
	//	printf("%c,",carray[i]);
	printf("\n");
//	for(i=0;narray[i]!='\0';i++)
	//	printf("%c,",narray[i]);
}
