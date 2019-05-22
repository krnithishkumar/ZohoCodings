#include<stdio.h>
#include<math.h>
int main()
{
	int n;
	printf("Enter the number:\n");
	scanf("%d",&n);
	double m = (double)n;
	double s = sqrt(m);
	double  res =  s - floor(s);
	printf("%ld,%ld",s,floor(s));
	if(res==0)
	{
		printf("Perfect Square\n");
	}
	else
	{
		printf("Not a perfect square");
	}
}
