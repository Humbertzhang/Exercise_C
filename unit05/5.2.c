#include<stdio.h>

int main(void)
{
    char a;
    int front,back,front2;
    printf("Enter the 24-hour time:");
    scanf("%2d%c%2d",&front,&a,&back);
    if (front==12&&back==00)
        {
        front2 = 12;
        printf ("Equivalent 12-hour time:12:00");
        }
    else if (front>=12)
        {
        front2 = front - 12;
        printf ("Equivalent 12-hour time:%d:%dPM",front2,back);
        }
    else if (front<12)
        {
        front2 = front;
        printf("Equivalent 12-hour time:%d:%dAM",front2,back);
        }
    return 0;
}
