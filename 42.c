#include<stdio.h>
#include<string.h>
int main()
{
	char input[25];
	printf("Enter the String:\n");
	scanf("%s",input);
	int l=0;
	int r = ( strlen(input) - 1);
	char temp;
	while(l<r)
	{
		if((input[l]=='a' || input[l]=='e' || input[l]=='i' || input[l] =='o' || input[l]=='u') && (input[r]=='a' || input[r]=='e' || input[r]=='i' || input[r] =='o' || input[r]=='u'))
                {
                	temp = input[l];
	     		input[l] = input[r];
		     	input[r] = temp;
			l++;
			r--;	
                }
                else if((input[l]=='a' || input[l]=='e' || input[l]=='i' || input[l] =='o' || input[l]=='u') && !(input[r]=='a' || input[r]=='e' || input[r]=='i' || input[r] =='o' || input[r]=='u'))
                {
                       r--; 
                }
		else if(!(input[l]=='a' || input[l]=='e' || input[l]=='i' || input[l] =='o' || input[l]=='u') && (input[r]=='a' || input[r]=='e' || input[r]=='i' || input[r] =='o' || input[r]=='u'))
		{
			l++;
		}
		else
		{
			l++;
			r--;
		}
	}
	printf("%s",input);
}
