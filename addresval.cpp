#include<iostream>
using namespace std;
void ak(int &b)
{
	b=10+b;
}
int main()
{
	int a=2;
	ak(a);
	cout<<a;
}
