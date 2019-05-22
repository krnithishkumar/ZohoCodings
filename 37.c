#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct family
{
	char son[25];
	char father[25];
};
int main()
{
	int n,i;
	printf("Enter the number of Relationships:\n");
	scanf("%d",&n);
	struct family *f;
	f = (struct family*)malloc(n*sizeof(struct family));
	for(i=0;i<n;i++)
	{
		printf("Child Name:");
		scanf("%s",f[i].son);
		printf("Father Name:");
		scanf("%s",f[i].father);
		printf("\n");
	}
	printf("Records are:\nChild name:\tFathers name:\n");
	for(i=0;i<n;i++)
	{
		printf("%s\t%s\n",f[i].son,f[i].father);
	}
	printf("Enter the Father's name:");
	char fa[25];
	char temp[25];
	int childrens=0;
	scanf("%s",fa);
	for(i=0;i<n;i++)
	{
		if(strcmp(f[i].father,fa)==0)
		{
			strcpy(temp,f[i].son);
		}
	}
	for(i=0;i<n;i++)
  {
    if(strcmp(f[i].father,temp)==0)
    {
      childrens = childrens +1;
    }
  }
	printf("Mr.%s has %d Grand Childrens",fa,childrens);
	return 0;
}

