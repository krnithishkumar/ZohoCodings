#include<stdio.h>
int recurse = 5,i=1;
int reverse(int n)
{
	int sum=0,flag;
	int temp = n;
	while(temp>0)
	{
		flag = temp%10;
		sum = flag + sum*10;
		temp = temp/10;
	}
	return sum;
}
void myfunction(int n)
{
	int rev = reverse(n);
        int res = rev+n;
        int addp = reverse(res);
        if(res == addp)
        {
                printf("%d is a Palindrome",addp);
	}
        else
        {
                if(recurse>0)
                {
                        printf("%d recursing with value is : %d\n",i++,res);
			recurse = recurse-1;
			myfunction(res);
                }
		else
		{
			printf("Iterations Over");
		}
        }

}
int main()
{
	int n;
	scanf("%d",&n);
	myfunction(n);
}
