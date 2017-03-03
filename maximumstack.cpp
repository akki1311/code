#include<iostream>
#include<stdio.h>
#include<stack>
using namespace std;

int main()
{
	long int n;
	cin>>n;
	long int max = -1;
	stack <long int>s;
	stack <long int>se;
	while(n--)
	{
		int q;
		cin>>q;
		if(q==1)
		{
			long int num;
			cin>>num;
			if(num >= max)
			{
				s.push(num);
				se.push(num);
				max = num;
			}
			else
				s.push(num);
		}
		if(q==2)
		{
			if(s.top() == se.top())
			{
				s.pop();
				se.pop();
				if(s.size()==0)
					max = -1;
				else
					max = se.top();
			}
			else
			{
				s.pop();
				if(s.size()==0)
					max = -1;
			}
		}
		if(q==3)
		{
			cout<<se.top()<<endl;
		}
	}
	return 0;
}
