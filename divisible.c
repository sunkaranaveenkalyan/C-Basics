#include<stdio.h>
void main()
{
	int num;
	scanf("%d",&num);
	if(num%3==0 && num%7==0 && num%9==0)
	printf("ginen number is divisible by 3 & 7",num);
	else
	printf("ginen number not is divisible by 3 & 7",num);
}
