#include  <stdio.h>
#include  <string.h>
int main()
{
    char a[50];
    char b[50];
    int i = 0;
    printf("请输入一个电话号码:");
    scanf("%s", a);
    int len = strlen(a);
    for (i =0; i < len; ++i)
    {
        switch(a[i])
        {
            case 'A': case 'B': case 'C': b[i] = '2';break;
            case 'D': case 'E': case 'F': b[i] = '3';break;
            case 'G': case 'H': case 'I': b[i] = '4';break;
            case 'J': case 'K': case 'L': b[i] = '5';break;
            case 'M': case 'N': case 'O': b[i] = '6';break;
            case 'P': case 'Q': case 'R': case 'S':b[i] = '7';break;
            case 'T': case 'U': case 'V': b[i] = '8';break;
            case 'W': case 'X': case 'Y': case 'Z': b[i] = '9';break;
            default: b[i]=a[i]; break;
        }
    }
    b[i] = '\0';
    printf("%s", b);
    printf("\n");
    return 0;
}