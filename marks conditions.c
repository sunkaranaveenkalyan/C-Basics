#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a>=80)
	{
	printf("A");
    }
    else if(70<=a)
    {
    	printf("B");
	}
	else if(60<=a)
	{
		printf("C");
	}
	else if(50<=a)
	{
		printf("D");
    }
	else
	{
		printf("fail");
	}
	
}
