#include<stdio.h>
int main(void)
{
    int m,n,mid;
    printf("please input two integers(后比前大）.");
    scanf("%d%d",&n,&m);
    for(;n!=0;)
    {
    mid = m%n;
    m = n;
    n = mid;
    }
    printf("最大公约数是:%d\n",m);
    return 0;
}
//求两整数的最大公约数

