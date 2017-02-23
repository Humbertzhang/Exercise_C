#include<stdio.h>

int main(void)
{
    int in,out,digit1,digit2,digit3;
    printf("Enter a three-digit number:");
    scanf("%d",&in);
    digit3 = in/100;
    digit2 = (in - digit3*100)/10;
    digit1 = (in - digit3*100)%10;
    printf("The reversal is:%d%d%d",digit1,digit2,digit3);
    return 0;
}
