#include<iostream>

using namespace std;

int main()
{
	for(int i=1;i<5;i++)
	{
		for(int j=1;j<=i;j++)
		{
			cout<<i;
			if(i!=j)
			cout<<"*";
		}
		cout<<endl;
	}
}
