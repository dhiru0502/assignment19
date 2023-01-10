#include<stdio.h>
int main()
{
    char a[5][30];
    int i,j,vowel=0;
    printf("Enter five string: ");
    for(i=0; i<5; i++)
    {
        gets(a[i]);
    }
    for(i=0; i<5; i++)
    {
        for(j=0; a[i][j]!= '\0'; j++)
        {
            if(a[i][j]== 'a' || a[i][j]== 'e' || a[i][j]== 'i' || a[i][j]== 'o' || a[i][j]== 'u' || a[i][j]== 'A' || a[i][j]== 'E' || a[i][j]== 'I' || a[i][j]== 'O' || a[i][j]== 'U')
                    vowel++;
        }
        printf("%s => %d\n",a[i],vowel);
        vowel=0;
    }
    return 0;
}
