#include<stdio.h>
int main()
{
        char str[35]="hello";
	char str1[35]="world";
	int i=0;j=0;
        while(str[i]!='\0')
	{
                str++;
		i++;
	}
	while(str1)
	{
		str=str1;
		str++;
                str1++;
	}
        str='\0';
        printf("%s",str);
}
