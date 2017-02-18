#include <stdio.h>

int main(void)
{
    int input;
    int output=1;
    printf("用来计算某数字的阶乘\n");
    printf("请输入：");
    scanf("%d",&input);
    for(input;input >=1;input--)
        output = output * input;
    printf("阶乘为：%d\n",output);
    return 0;
}
