#include<stdio.h>
int main()
{
    char a[5][30];
    int i,j,flag=0,k=0;
    printf("Enter the strings: \n");
    for(i=0; i<5; i++)
    {
        gets(a[i]);
    }

   for(i=0; i<5; i++)
   {
       k=0;
       flag=0;
     for(j=0; a[i][j]; j++);
      while(k<j/2)
    {
         if(a[i][k]!=a[i][j-1-k])
        {
           flag=1;
           printf("\n%s is not a pallindrom",a[i]);
            break;
        }
        k++;
   }
   if(flag==0)
            printf("\n%s is a pallindrom",a[i]);
   }
    return 0;
}
