#include<iostream>

using namespace std;
void Func1(int a)
{
	a++;
}
void Func2(int& a)
{
	a++;
}

int main()
{
	
 
 	int a=10;
 	Func1(a);
 	cout<<a<<endl;
 	Func2(a);
 	cout<<a;
 	return 0;
	
}
