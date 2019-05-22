#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	srand(time(0));
  	int n1,n2,n3,n4,n5,n6,n7,n8,n9,n0;
	int a = [0,1,2,3,4,5,6,7,8,9];
	n0 = 0;
	n1 = rand()%10;
	printf("%d",n1);
	n2 = rand()%10;
	while((n2!=2 || n2!=4 || n2!=6 || n2!=8) && n2!=n1)
	{
		printf("%d\n",n2);
		n2=rand()%10;
	}
	n3 = rand()%10;
	while((n1*100+n2*10+n3)%3 != 0 && n3!=n2 && n3!=n1)
	{
		n3=rand()%10;
	}
	printf("%d,%d,%d,%d",n1,n2,n3,n0);
	return 0;
}
