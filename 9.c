#include<stdio.h>
#include<string.h>
int main()
{
    char username[4][20]= {"prateek","naresh","alakh","dhiraj"};
    char user[20];
    int i,N,fact=1, flag=0;
    printf("Enter a user name: ");
    gets(user);
    for(i=0; i<4; i++)
    {
      if(strcmp(username[i],user)==0)
      {
          flag=1;
          printf("Enter a number for find out factorial: ");
          scanf("%d",&N);
          for(i=1; i<=N; i++)
            fact= fact*i;
          printf("Factorial is: %d",fact);
          break;
      }
    }
    if(flag==0)
        printf("Invalid user name");
    return 0;
}
