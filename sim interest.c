#include<stdio.h>
void main()
{
	int P,T,SI;
	float R;
	
	P = 10000;
	T = 2;
	R = 7.5;
	SI = P*T*R/100;
	
	printf("the simple intrest(SI),when principal is %d,for %d years,rate of interest %f is = %d" ,P,T,R,SI);
}
