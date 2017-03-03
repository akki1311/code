#include<stdio.h>

void toggle(char *str)
{
	char *ptr = str;
	while(*ptr!='\0')
	{
		if(*ptr>=65 && *ptr<=90)
		{
			*ptr = *ptr + 32;
			ptr++;
		}
		else
		{
			*ptr = *ptr - 32;
			ptr++;
		}
	}
	ptr = str;
	printf("%s",ptr);
}

int main()
{
	char str[1000];
	scanf("%[^\n]s",str);
	toggle(str);
	return 0;
}
