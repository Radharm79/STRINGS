#include<stdio.h>
int main()
{
        char str[35]="hello",str1[35];
        int count=0,i=0;
        while(str[count]!='\0')
                count++;
	for(;str[count]>=str[0];count--)
	{
		str1[0]=str[count];
		i++;
	}
	str1[i]='\0';
	printf("%s",str1);
        printf("Length of the string =%d",count);
}

