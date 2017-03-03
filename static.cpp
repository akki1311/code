#include<iostream>

using namespace std;
void func()
{
	static int x=0;
	printf("%d",x);
	x++;
}
int main()
{
	func();
	func();
	func();
	return 0;
}
