#include<stdio.h>
int main()
{
        char str1[35]="hello",str2[35];
     
        int count=0;
        while(str1[count]!='\0')
	{
                str2[count]=str1[count];
		count++;
	}
        printf("\nThe first string is :%s\nThe second string is:%s",str1,str2);
}

