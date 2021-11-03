#include<stdio.h>
void main()
{
	int totalmin,hour,min;
	min = 550;
	hour =min/60;
	min = min%60;
	/* here m/60 is converted min into hours and m%60 gives the hours in minutes that is quotient
	
	                   60)100(1 ----> / (quotient)
	                      60
	                    -----
	                    40 ----->%(renainder)
	                    -----
	                                                        */
	printf("%d hour(s) %d minutes(s)",hour,min);
}
