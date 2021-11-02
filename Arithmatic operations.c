/* ALL ARITHMETIC OPERATIONS */
#include<stdio.h>
void main()
{
	int a,b,s,dif,p,r;
	float q;
	a = 11;
	b = 2;
	s = a+b;
	dif = a-b;
	p = a*b;
	q = a*1.0/b;
	r = a%b;
	printf("sum of %d and %d is: %d\n",a,b,s);
   printf("difference of %d and %d is: %d\n",a,b,dif);
   printf("product of %d and %d is: %d\n",a,b,p);
   printf("quocient of %d and %d is: %f\n",a,b,q);
   printf("remainder of %d and %d is: %d",a,b,r);






}
