int main()
{
	int c=10;
	//printf("%d",sizeof(c));
	int a[6]={1,2,3};
	int i;
	for(i=0;i<6;i++)
		printf("%d",a[i]);
	int b=5;
	if(b<sizeof(int))
		printf("true");
	else
		printf("false");
	return 0;
}
