#include<stdio.h>
int main()
{
    char ch;
    printf("enter a character\n");
    scanf("%c",&ch);
    if((ch>='a'&& ch<='z0')||(ch>='A' && ch<='Z'))
    {
     printf("%c its an alphabet",ch);
    }

    else
    {
      printf("its a digit");
    }

}
