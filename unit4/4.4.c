#include<stdio.h>

int main(void)
{
    int in,digit[4],i=0;
    printf("Enter a number between 0 and 32767:");
    scanf("%d",&in);
    for(i;i<=4;i++)
    {
        digit[i] = in%8;
        in = in/8;
    }
    printf("In octal,your number is:%d%d%d%d%d",digit[4],digit[3],digit[2],digit[1],digit[0]);
    return 0;
}
