#include<stdio.h>
int main()
{
	int n,r,rev;
	n=1234;
	rev=0;
	printf("enter the num");
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		rev=rev*10+r;
		n=n/10;
	
	}
	printf("%d",rev);
}
