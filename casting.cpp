#include<stdio.h>
int main()
{
	
	char a=70;//a='70';
	char b=20;
	float x=10/4*4.0;//float x=10/4.0*4.0;o/p=8.000000
	float y=(float)10/3;
	printf("x=%f\n",x);
	printf("y=%f\n",y);
	float w=10/3*3;
	float v=2*10/6/3*2;//left to right evaluation
		printf("w=%f\n",w);
	printf("v=%f\n",v);
	printf("%d\n",sizeof a);
	printf("%d\n",sizeof b);
	printf("%d\n",sizeof(a+b));
	return 0;
}
