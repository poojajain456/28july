//prg to check no is divisible bt 5 and 11
#include<stdio.h>
int main()
{
	int num;
	printf("enter the number");
	scanf("%d",&num);
	if(num%5==0 && num%11==0)
	{
		printf("number is divisible by both");
	}
	else
	{
		printf("number is not divisible by both");
	}
	return 0;
}
