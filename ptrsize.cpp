#include<iostream>
using namespace std;
int main()
{
	char *p="prototech";
	cout<<p<<sizeof(p)<<sizeof(*p)<<sizeof(&p);
	return 0;
}
