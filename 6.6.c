#include<stdio.h>
int main(void)
{
    int q,l,n,m;
    printf("请输入一个数字： ");
    scanf("%d",&n);
    l = 0;
    for(m=1;l<n;m++)
    {
    q = m+m;
    l = q*q;
    printf("%d\n",l);
    }
    return 0;
}
