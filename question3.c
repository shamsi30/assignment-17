#include<stdio.h>
int main()
{
    char name[]={"lambhorgini"},i,count=0;
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
                count++;
    }
    printf("The total numbers of vowels in given string are %d",count);
    return 0;
}