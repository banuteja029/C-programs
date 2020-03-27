#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("enter three nos");
    scanf("%d %d %d",&num1,&num2,&num3);//100,200,300
    if((num1>num2)&&(num1>num3))
       {
            printf("num1:%d is maximum",num1);
       }
    else
        if(num2>num3)
    {
            printf("num2:%d is maximum",num2);
    }
    else
        printf("num3:%d is maximum",num3);

}
