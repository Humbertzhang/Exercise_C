#include<stdio.h>
int main(void)
{
    int day,day1,month,month1,year,year1,total,total1;
    char a,b;
    printf("This program will find the earlist day\n");
    printf("input 0/0/0 to break it\n");
    printf("Enter a date (mm/dd/yy):");
    scanf("%d%c%d%c%d",&month1,&a,&day1,&b,&year1);
    printf("\n");
    total1 = year1*365 + month1*30 + day1*1;
    for(;;)
    {
    printf("Enter a date (mm/dd/yy):");
    scanf("%d%c%d%c%d",&month,&a,&day,&b,&year);
    total = year*365 + month*30 + day*1;
    printf("\n");
    if ((day+month+year) == 0)
       {
           day =day1;
           month = month1;
           year = year1;
           goto done;
       } 
    if(total > total1)
        continue;
    else 
       {
        day1 = day;
        month1 = month;
        year1 =year;
        total1 = year1*365 + month1*30 + day1*1;
       } 
   }
    done:
    printf("%d/%d/%d is the earlist date.\n",month1,day1,year1);
    return 0;
}

