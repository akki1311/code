#include<iostream>

using namespace std;

void calc(int &a,int &b)
{
	cout<<a+b;
}
void calc(int x,int y)
{
	cout<<x*y;
}
int main()
{
	int m =10,n =20;
	calc(10,n);//calc(m,n) will give error
	return 0;
}
