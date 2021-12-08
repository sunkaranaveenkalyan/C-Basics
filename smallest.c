#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("enter four numbers");
	scanf("%d%d%d%d",&a,&b,&c,&d);
	if(a<b && a<c && a<d)
	{
		printf("%d is smallest",a);
	}
	else if(b<c && b<d && b<a)
	{
		printf("%d is smallest",b);
	}
	else if(c<a && c<b && c<d)
	{
		printf("%d is smallest",c);
		}
	else
	{
		printf("%d is smallest",d);
	}
  
}
