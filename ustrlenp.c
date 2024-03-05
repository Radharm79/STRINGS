#include<stdio.h>
//#include<stdlib>
int main()
{
        char str[35];
        printf("Enter a string:");
        fgets(str);
        printf("The String is:");
        puts(str);
        int count=0;
        while(str[count]!='\0')
                count++;
        printf("Length of the string =%d",count);
}

