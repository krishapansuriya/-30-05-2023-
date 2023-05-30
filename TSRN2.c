#include<stdio.h>
void divi(int n)
{
	if((n%3==0) && (n%5==0))
	{
		printf("Your number is divisible by 3 & 5.");
	}
	else
	{
		printf("Your number is not divisible by 3 & 5.");
	}
}
int main()
{
	int a;
	printf("Enter your value=");
	scanf("%d",&a);
	divi(a);
	return 0;
}
