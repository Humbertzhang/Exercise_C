#include<stdio.h>

int main(void)
{
    int i,n;
    scanf("%d",&i);
    if (i>=0&&i<=9)
        n = 1;
    else if (i>=10&&i<=99)
        n = 2;
    else if (i>=100&&i<=999)
        n = 3;
    else if (i>=1000&&i<=9999)
        n = 4;
    printf("The number %d has %d digits",i,n);
    return 0;
}
