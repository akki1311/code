#include<iostream>

using namespace std;
int main()
{
	int i,x=6,y=8;
	int prev;
	int arr[] ={3, 5, 4, 2, 6, 3, 0, 0, 5, 4, 8, 3};
	for (i = 0; i < (sizeof(arr)/sizeof(arr[0])); i++)
   {
     if (arr[i] == x || arr[i] == y)
     {
       prev = i;
       break;
     }
   }
   cout<<"i:"<<arr[i];
}
