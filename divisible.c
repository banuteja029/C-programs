#include<stdio.h>
int main()
{
    int n;
    printf("enter a no");
    scanf("%d",&n);
    if((n%5==0)&&(n%11==0))
        printf("no is divisible");
        else
            printf("no is not divisiblr");
}
