/* 斐波那契数列前40个 */
#include <stdio.h>
int main()
{
    int a[40],i;
    a[0] = 0;
    a[1] = 1;
    for (i = 2;i<40;i++){
        a[i] = a[i-1]+a[i-2];
    }
    for (i = 0;i<40;i++){
        printf("%15d\n",a[i]);
    }
    return 0;
}
