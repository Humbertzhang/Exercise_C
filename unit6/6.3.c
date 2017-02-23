#include<stdio.h>
int main(void)
{
    int a,b,n,m,mid,mid2,gcd;
    char c ;
    printf("输入一个分数(a/b):");
    scanf("%d%c%d",&n,&c,&m);
    a = n;
    b = m; //保存原有大小
    if ( n > m )
    {
    mid = m;
    m = n;
    n = mid; //交换mn大小，使 n < m
    }
    for (;n!=0;)
    {
    mid2= m%n;
    m = n;
    n = mid2;
    }
    gcd = m;
    a = a/gcd;
    b = b/gcd;
    printf("%d/%d\n",a,b);
    return 0;
}
