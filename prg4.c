//armstrong number
#include<stdio.h>
int main()
{
	int num,rem,sum=0,temp;
	printf("enter any numner");
	scanf("%d",&num);
	temp=num;
	while(num>0)
	{
		rem=num%10;
		sum=sum*10+rem;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not armstrong");
	}
	return 0;
}
