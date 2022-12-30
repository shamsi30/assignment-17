#include<stdio.h>
int main()
{
    char a[6],i,length=0;
    printf("Enter your name in lowercase:");
    scanf("%s",a);
    for(i=0;a[i]!=0;i++)
    {
        length++;
    }
    printf("The length of the string is %d",length);
    return 0;
}   