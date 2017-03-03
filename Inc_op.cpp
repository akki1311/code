#include<stdio.h>
int main()
{
	int x=0,y=0;
    x++ + printf("x=%d",x);
	++y + printf("y=%d",y);
    int i=x++ ;
	printf("final value of x=%d y=%d i=%d",x,y,i);
	
	return 0;
}
