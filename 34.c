#include<stdio.h>
#include<stdlib.h>
#include<math.h>
struct weight
{
	int element;
	int weight;
};
int perfectsquare(int n)
{
	double m = (double)n;
	double square = sqrt(m);
	double res = square - floor(square);
	if(res==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}
int main()
{
	int n,i;
	printf("Enter the number of elements:\n");
	scanf("%d",&n);
	struct weight *s;
	s = (struct weight*)malloc(n*sizeof(struct weight));
	printf("Enter the elements:\n");
	for(i=0;i<n;i++)
	{
		s[i].weight = 0;
	}
	for(i=0;i<n;i++)
	{
		scanf("%d",&s[i].element);
		if(perfectsquare(s[i].element))
		{
			//printf("Perfect Square invoked");
			s[i].weight = 5;
		}
		if((s[i].element % 4 == 0) || (s[i].element % 6 == 0))
		{
			s[i].weight += 4;
		}
		if(s[i].element % 2 == 0)
		{
			s[i].weight += 3;
		}
	}
	int temp1,temp2,j;
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(s[j].weight<s[j+1].weight)
			{
				temp1 = s[j+1].weight;
				temp2 = s[j+1].element;
				s[j+1].weight = s[j].weight;
				s[j+1].element = s[j].element;
				s[j].weight = temp1;
				s[j].element =  temp2;
			}
		}
	}
	printf("*****************\n");
	printf("Elements\tWeights\n");
	printf("*****************\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t%d\n",s[i].element,s[i].weight);
	}
	return 0;
}
