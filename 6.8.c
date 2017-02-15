#include<stdio.h>

int main(void)
{
    int i,n,day,week;
    printf("输入这个月有几天:");
    scanf("%d",&day);
    printf("输入第一天是星期几(1=Mon,7=Sun):");
    scanf("%d",&week);
    printf("\n");
    for(n=1;n<week;n++)
    {
    printf("     ");
    }
    week -=1;
    for(i=1;i<=day;i++)
    { 
    if (week == 7)
    {
    printf("\n");
    week = 0;
    }

    week +=1;
    if (i <10)
    printf("  %d  ",i);
    else 
    printf(" %d  ",i);
    } 
    printf("\n\n\n");
    return 0;
}
