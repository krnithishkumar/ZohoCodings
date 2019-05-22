#include<stdio.h>
#include<stdlib.h>
int main()
{
	char a,m[10];
	printf("Character:\n");
	scanf("%c",&a);
	int n = a - '0';
	printf("Integer : %d\n",n);
	printf("String :\n");
	scanf("%s",m);
	int p = atoi(m);
	printf("Integer : %d\n",p);
}
