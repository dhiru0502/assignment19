#include<stdio.h>
int main()
{
    char a[5][30];
    int i,flag=0;
    printf("Enter the strings: \n");
    for(i=0; i<5; i++)
    {
        gets(a[i]);
    }
    for(i=0; i<5; i++)
    {
        if(strcmp(a[i],"dhiraj") ==0)
        {
            flag=1;
            printf("string found");
            break;
        }

    }
    if(flag==0)
            printf("String not found");
    return 0;
}
