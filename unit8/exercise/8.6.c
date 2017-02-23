#include <stdio.h>
int main()
{
    char words[160],j;
    int i,k,m,n=0;                  //i 循环
    for(i=0;i<80;i++){
        scanf("%c",&words[i]);
        if (words[i] == '\n')
            break;
    }

    k = i;

    for(i;i>=0;i--){            //反向遍历数组
        m = i;                  //保存i
        j = words[i];
        if (j>= 65 && j <= 90){
        for (k;k>m;k--){
            printf("%c",words[i]);
            i ++;
        }
        if ( n ==0){
            printf(" ");
            n = 1; //最后一个单词没空格，应加上
        }
      }
        else
            continue;
        i = m;
    }
    printf("\n");
    return 0;
}
