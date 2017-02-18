#include <stdio.h>
#include <math.h>
#define INIT 1
int main(void)
{
    double x,y = INIT,z,ave = INIT,mid=999;
    printf("此程序用来求某正浮点数的算术平方根\n");
    printf("请输入:");
    scanf("%lf",&x);
    while (mid > 0.00001)
    {
        z = x/y;
        ave = (y + z)/2;
        mid = fabs(ave-y);
        y = ave;
    }
        printf("结果是：%lf\n",ave);
    return 0;
}
