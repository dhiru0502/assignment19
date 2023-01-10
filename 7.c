#include<stdio.h>
#include<string.h>
int main()
{
    char ip[]= "23.134.12.13";
    char *a= strtok(ip,".");
    while(a!=NULL)
    {
        int X= atoi(a);
        if((X>=0) && (X<=255))
            printf("%d ",X);
        a= strtok(NULL,".");
    }
    return 0;
}
