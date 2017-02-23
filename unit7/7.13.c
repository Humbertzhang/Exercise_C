#include <stdio.h>
#define WORD_INIT 1
int main()
{
    float len=0,counter=WORD_INIT;
    char a;
    printf("此程序用来计算平均字符数\n");
    printf("请输入一段话：");
    while((a = getchar()) != '\n')
    {
        if ( a  ==' ')
         counter++ ;
        else
         len ++;
    }
    printf("len:%f\n",len);
    printf("conuter:%f\n",counter);
    printf("平均字符数为：%.1f\n",len/counter);
    return 0;
}
