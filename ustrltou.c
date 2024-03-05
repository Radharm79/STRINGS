#include<stdio.h>
int main()
{
        char str[35]="hello";
        int i = 0;
        while(str[i]!='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			str[i]=str[i]+('a'-'A');
			//printf(str[i]);
		}
		else if(str[i]>='a' && str[i]<='z')
		{
			str[i]=str[i]-('a'-'A');
                       // printf(str[i]);
                }
                i++;
	}
       // printf("Length of the string =%d",count);
       printf(str);
}
