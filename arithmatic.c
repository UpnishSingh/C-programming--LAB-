#include<stdio.h>
int main()
{
    int a,b,sum,diff,multi,remain;
    printf("Enter the value of a+b");
    scanf("%d%d",&a,&b);
    sum = a+b;
    printf("Sum =%d\t",sum);
    diff=a-b;
    printf("diff=%d\t",diff);
    multi=a*b;
    printf("multi=%d\t",multi);
    remain=a/b;
    printf("remain=%d\t",remain);
    return 0;
}