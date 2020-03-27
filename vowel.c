/*C program to check vowel or consonant*/

#include<stdio.h>
int main()
{
    char uv;
    printf("enter a character\n");
    scanf("%c",&uv);
    char lv;


    if(uv=='a'||uv=='e'||uv=='i'||uv=='o'||uv=='u'||uv=='A'||uv=='E'||uv=='I'||lv=='O'||lv=='U')
    printf("%c is vowel",uv);
    else
    printf("%c is consonant",uv);
}
