//swap the number
#include<stdio.h>
int main()
{
	int a=10,b=20,c;
	printf("before swapping=%d %d \n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("after swapping=%d %d \n",a,b);
	return 0;
}
