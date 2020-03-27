//C program to check whether a character is Uppercase or Lowercase

#include<stdio.h>
int main()
{
    char c;
    printf("enter a letter\n");
    scanf("%c",&c);
    if(c>=97 && c<=122)
        printf("its lower case");
    else
        printf("upper case");

}
