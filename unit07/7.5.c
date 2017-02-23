#include <stdio.h>
#include <string.h>

int main(void)
{
    char a[100];
    int b[100];
    int i = 0,j = 0,sum = 0;
    printf("请输入一个大写单词：");
    scanf("%s",a);
    int len = strlen(a);
    for (i;i<len;i++)
    {
        switch(a[i])
        {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U': b[i] = 1;break;
            case 'D': case 'G': b[i] = 2; break;
            case 'B': case 'C': case 'M': case 'P': b[i] = 3;break;
            case 'F': case 'H': case 'V': case 'W': case 'Y': b[i] = 4;break;
            case 'K': b[i] = 5; break;
            case 'J': case 'X': b[i] = 8; break;
            case 'Q': case 'Z': b[i] = 10; break; 
        }
    }
    
    for (j;j<len;j++)
    {
        sum =sum + b[j];
    }
    printf("总得分数是：%d \n",sum);

    return 0;
}