#include<stdio.h>
void mult(int n1)
{
	int mult;
	mult=n1*n1*n1;
	printf("mult=%d",mult);
}
int main()
{
	int a;
	printf("Enter value=");
	scanf("%d",&a);
	mult(a);
	return 0;
}
