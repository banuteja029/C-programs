//C program to check whether a character is alphabet, digit or special character
#include<stdio.h>

int main()
{
    char ch;
    int digit;
    printf("enter a character\n");
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        printf("its an alphabet");
    else if(digit>='0'||digit<='9')
        printf("its no");
    else
        printf("special character");
}
