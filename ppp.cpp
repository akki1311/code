#include<iostream>
#include<stdio.h>
#include<math.h>
#include<algorithm>
using namespace std;

int main()
{
	long int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int a=pow(i,4);
		sum=sum+a;
	}
	cout<<sum;
}
