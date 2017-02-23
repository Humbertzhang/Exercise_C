#include <stdio.h>
int main()
{
    int a,b;
    char c,d;
    printf("请输入12小时制时间(如00:00 AM）:\n");
    scanf("%d:%d %c%c",&a,&b,&c,&d);
    if (c == 'A')
        printf("24小时制时间是：%d:%d",a,b);
    else if (c == 'P')
    {   
        a = a +12;
        printf("24小时时间是：%d:%d \n",a,b);
    }
    return 0;
}