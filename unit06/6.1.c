#include<stdio.h>
int main(void)
{
    float i,max=-1;
    printf("Enter a number which <= 0 to stop\n");
    for(;i>0;)
    {
    printf("Enter a number:");
    scanf("%f",&i);
    if (max <=i)
    max = i ;
    }
    printf("%f",max);
    return 0;
}

