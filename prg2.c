//pallindrome
#include<stdio.h>
int main()
{
	int num=15451,rem,sum=0,temp;
	
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("pallindrome");
	}
	else
	{
		printf("not pallindrome");
	}
	return 0;
}
