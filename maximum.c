#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the values of a and b");
    scanf("%d\n%d",&a,&b);

    if(a>b)
        printf("a is greater");
    else
        printf("b is greater");
    if(a==b)
        printf("both are equal");
}
