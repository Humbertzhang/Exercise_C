#include<stdio.h>
int main(void)
{
    int d1,d2,d3,d4,max1,min1,max2,min2,max,min;
    printf("Enter four integers:");
    scanf("%d%d%d%d",&d1,&d2,&d3,&d4);
    if (d1 > d2)
        {
        max1 = d1;
        min1 = d2;
        }
    else
        {
        max1 = d2;
        min1 = d1;
        }
    if (d3 > d4)
        {
        max2 = d3;
        min2 = d4;
        }
    else
        {
        max2 = d4;
        min2 = d3;
        }
    if (max2 > max1)
        max = max2;
    else
        max = max1;
    if (min2 < min1)
        min = min2;
    else
        min = min1;
    printf("Largest:%d\nSmallest:%d\n",max,min);


    return 0;
}
