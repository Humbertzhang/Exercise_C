#include<stdio.h>
int main(void)
{
    int n ;
    printf("请输入要倒过来的数字");
    scanf("%d",&n);
    do
    {
    printf("%d",n%10);
    n = n/10;
    }while(n);
    printf("\n");
    return 0;
}
