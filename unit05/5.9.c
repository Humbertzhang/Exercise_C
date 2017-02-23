#include<stdio.h>
int main(void)
{
    int day1,month1,year1,day2,month2,year2;
    char a1,a2;
    printf("Enter first date(mm/dd/yy):");
    scanf("%d%c%d%c%d",&month1,&a1,&day1,&a2,&year1);
    printf("Enter second date(mm/dd/yy):");
    scanf("%d%c%d%c%d",&month2,&a1,&day2,&a2,&year2);
    if (year1 < year2)
        printf("%d/%d/%d is earlier than %d/%d/%d",month1,day1,year1,month2,day2,year2);
    else if (year1 > year2)
        printf("%d/%d/%d is earlier than %d/%d/%d",month2,day2,year2,month1,day1,year1);
    else if (month1 < month2)
        printf("%d/%d/%d is earlier than %d/%d/%d",month1,day1,year1,month2,day2,year2);
    else if (month1 >month2)
        printf("%d/%d/%d is earlier than %d/%d/%d",month2,day2,year2,month1,day1,year1);
    else if (day1 < day2)
        printf("%d/%d/%d is earlier than %d/%d/%d",month1,day1,year1,month2,day2,year2);
    else if (day1 > day2)
        printf("%d/%d/%d is earlier than %d/%d/%d",month2,day2,year2,month1,day1,year1);
    return 0;
}
