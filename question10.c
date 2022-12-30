#include<stdio.h>
int main()
{
    char name[10];
    printf("Enter any name:");
    gets(name);
    int i,j,t;
    for(i=0;i<9;i++)
    {
        for(j=i+1;j<10;j++)
        {
            if(name[i]>name[j])
                {
                    t=name[i];
                    name[i]=name[j];
                    name[j]=t;
                }
        }
    }
    for(i=0;i<10;i++)
    {
        printf("%c",name[i]);
    }
    return 0;
}