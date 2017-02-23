/* 声明，行为一个月每一天 列为每天小时数 */
#include <stdio.h>
#define DAYS 30
#define HOURS 24
int main()
{
    int temperature[DAYS][HOURS] = {0};
    int ave_day[30] = {0},ave_month;
    int i,j,total_day[DAYS]= {0};
    
    for (j = 0;j<DAYS;j++){
      for (i=0;i<HOURS;i++){
          total_day[j] += temperature[j][i];
      }
    }
    for (j = 0;j<DAYS;j++){
        ave_day[j] = total_day[j]/HOURS;
    }
    for (j=0;j<DAYS;j++){
        ave_month += ave_day[j];
    }
    ave_month = ave_month/DAYS;
    printf("%d\n",ave_month);
    return 0;
}
