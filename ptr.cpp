#include<iostream>

using namespace std;


int main()
{
	int a=0,b=1,c=2;
	//int x=a,y=b,z=c;
	int &p = a,&q = b,&r =c;
	p=++c;
	q=++b;
	cout<<b<<endl;
	r=++b + c++;
	cout<<b<<c<<endl;
	cout<<p<<q<<r;
	return 0;
}
