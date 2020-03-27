#include<stdio.h>
int main()
{
    int leap;
    printf("enter a year");
    scanf("%d",&leap);
    if((leap%4==0)||(leap%400==0)&&(leap%100!=0))
       {
           printf("its a leap year");
       }
       else
        {
            printf("its not a leap year");
        }
}
