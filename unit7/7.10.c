#include <stdio.h>
#include <string.h>

int main()
{
    char a;
    int sum = 0,i = 0;
    printf("此程序用来统计一句话中元音字母“a e i o u”的数量\n");
    printf("请输入一段话：");
    while ((a = getchar()) != '\n')
    {
        switch (a)
        {
            case 'A': case 'E': case 'I': case 'O': case 'U': sum = sum +1;break;
            case 'a': case 'e': case 'i': case 'o': case 'u': sum = sum +1;break;
            default : break;
        }
    }
    printf("元音字母的个数是：%d\n",sum);
    return 0;
}