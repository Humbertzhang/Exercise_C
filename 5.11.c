#include<stdio.h>
#include<string.h>
int main(void)
{
    int fir,sec;
    char digit1,digit2,special;
    printf("Enter a two digits number:");
    scanf("%1d%1d",&fir,&sec);
    if (fir==1)
    {
    if (sec == 1)
        printf("eleven");
    else if (sec == 2)
        printf("twelve");
    else if (sec == 3)
        printf("thirteen");
    else if (sec == 4)
        printf("fourteen");
    else if (sec == 5)
        printf("fifteen");
    else if (sec == 6)
        printf("sixteen");
    else if (sec == 7)
        printf("seventeen");
    else if (sec == 8)
        printf("eighteen");
    else if (sec ==9)
        printf("nineteen");
    }
    else if (fir == 2)
        printf("twenty-");
    else if (fir == 3)
        printf("thirty-");
    else if (fir == 4)
        printf("forty-");
    else if (fir == 5)
        printf("fifty-");
    else if (fir == 6)
        printf("sixty-");
    else if (fir == 7)
        printf("seventy-");
    else if (fir == 8)
        printf("eighty-");
    else if (fir == 9)
        printf("ninety-");
    switch (sec)
    {
    case 1: printf("one"); break;
    case 2: printf("two"); break;
    case 3: printf("three"); break;
    case 4: printf("four"); break;
    case 5: printf("five"); break;
    case 6: printf("six"); break;
    case 7: printf("seven"); break;
    case 8: printf("eight"); break;
    case 9: printf("nine"); break;
    case 0: printf(""); break;
    }
    return 0;
}
