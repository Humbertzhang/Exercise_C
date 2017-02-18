#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char first,ch;
    printf("输入英文名字(例如输入Harry Potter输出 Potter，H.) \n");
    printf("请输入：");
    
    while ((ch = getchar()) == ' ');//空循环以跳过空字符
    first = ch;
    while ((ch = getchar()) != ' ');//空循环跳过第一个字母后的其他字母，到空格处
    while ((ch = getchar()) != '\n') 
    {
        if (ch != ' ')
            putchar(ch);//输出ch，此处为一个一个输出？
    }
    printf(", %c.\n",first);
    return 0;
}
