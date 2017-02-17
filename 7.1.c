#include <stdio.h>
int main(void)
{
    long long i,n;
    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table:");
    scanf("%lld",&n);

    for(i = 1; i <= n;i++)
    {
        printf("%10lld%10lld\n",i,i*i);
    }

    return 0;
}