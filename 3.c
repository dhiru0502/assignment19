#include<stdio.h>
#include<string.h>
int main()
{
    char city[5][30];
    int i;
    printf("Enter the name of five cities: \n");

    for(i=0; i<5; i++)
    {
        gets(city[i]);
    }

    for(i=0; i<5; i++)
        printf("%d: %s\n",i+1,city[i]);
    return 0;
}
