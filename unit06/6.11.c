#include<stdio.h>
long long jiecheng(long long n);
int main(void)
{
    double e=1;
    long long i=1,s=1;
    long long j;
    long long n;
    printf("此程序用来计算常量e的近似值\n");
    printf("请输入一个常数：");
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
      e += 1.0/jiecheng(i);  
    }
    printf("e近似于：%.10lf\n",e);
    return 0;
}
long long jiecheng (long long n)
{ 
  long long i;
  long long ret=1;
  for(i=1;i<=n;i++){
    ret*=i;
  }
  return ret;
}
