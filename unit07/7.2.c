#include <stdio.h>
#include <stdlib.h>
int main(void)
{
    long long i,m=0,n;
    char ch;
    printf("This program prints a table of squares.\n");
    printf("Enter a number of entries in table:");
    scanf("%lld",&n);
    getchar();

    for (i=1;i<=n;i++)
    {
    printf("%10lld%10lld\n",i,i*i);
    m +=1;
    if (m == 24)
      {
        printf("Press Enter to continue.\n");
        ch = getchar();
        if(ch == '\n')
            m = 1;
        else 
            break;
      }
    }
    return 0;
}
