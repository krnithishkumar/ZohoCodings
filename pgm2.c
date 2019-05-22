#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
label : srand(time(0));
	int f1,f2,f3;
	int f4=0;
	long int n;
	while(f4!=1)
	{
		n =  rand() % 100000000000;
		int c1 = n/100000000;
		int c2 = n/10000000;
		if((c1%2)==0)
		{
			f1 = 1;
		}
		if((c2%3)==0)
		{
			f2 = 1;
		}
		if((n%10)==0)
		{
			f3 = 1;
		}
		if(f1==1 && f2==1 && f3==1)
		{
			f4 =1;
		}
	}
	long int temp = n;
	int op[10];
	int i=0,j;
	while(temp>0)
	{
		op[i] = temp%10;
		temp = temp/10;
		i++;
	}
	for(i=0;i<10;i++)
	{
		printf("%d\n",op[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(op[i]==op[j])
			{
				goto label;
			}
		}
	}
	printf("\n");
	printf("%ld",n);
	return 0;
}
