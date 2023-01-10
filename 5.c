#include<stdio.h>
int main()
{
    char a[5][30];
    int i,flag=0;
    printf("Enter the email addresses: \n");
    for(i=0; i<5; i++)
    {
        gets(a[i]);
    }
    for(i=0; i<5; i++)
    {
        if(strchr(a[i],'@') ==0)
        {
            flag=1;
            printf("%s is not a correct email address.\n",a[i]);
        }

    }
    if(flag==0)
            printf("All emails addresses are correct. \n");
    return 0;
}
