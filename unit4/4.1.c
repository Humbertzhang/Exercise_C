#include<stdio.h>

int main(void)
{
    int enter,putout,digitone,digittwo;
    printf("Enter a two-digit number:");
    scanf("%d",&enter);
    digitone=enter%10;
    digittwo=enter/10;
    printf("The reversal is:%d%d",digitone,digittwo);
    return 0;
}
