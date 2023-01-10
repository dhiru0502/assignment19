#include<stdio.h>
#include<string.h>
int main()
{
    int i,flag=0;
    char a[3][2][20]= {{"prateek","123"},{"mysirG","456"},{"aditya","321"}};
    char username[20]= "prateek";
    char password[10]= "123";
   /* printf("Enter a user name: ");
    gets(username);
    printf("Enter password: ");
    gets(password);*/
    for(i=0; i<3; i++)
    {
      if((strcmp(username,a[i][0])==0) && (strcmp(password,a[i][1])==0))
      {
          printf("Login successful!!");
          flag=1;
      }
    }
    if(flag==0)
        printf("Username or Password not matched");
    return 0;
}
