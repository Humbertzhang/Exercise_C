#include <stdio.h>
int main()
{
    float a,b,c,d;
    float output;
    char e;
    printf("此程序可加减乘除分数\n");
    printf("格式： a/b + c/d \n");
    scanf("%f/%f %c %f/%f",&a,&b,&e,&c,&d);
    if (e == '*')
    output = (a*c)/(b*d);   
    else if (e == '+')
    output = (a*d + b*c)/(b*d);
    else if (e == '-')
    output = (a*d - b*c)/(b*d);
    else if (e == '/')
    output = (a*d)/(b*c);
    printf("结果是：%f \n",output);
    return 0;
}