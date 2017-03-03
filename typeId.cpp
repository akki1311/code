#include<typeinfo>//typeinfo important
#include<iostream>
using namespace std;
int main()
{
		char a=65;
		char b=97;
		float i=12;
		cout<<typeid(a).name()<<endl;
		cout<<typeid(b).name()<<endl;
		cout<<typeid(a+b).name()<<endl;
		cout<<typeid(i).name()<<endl;
		return 0;
}
