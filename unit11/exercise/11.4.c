/***************************************
*编写swap函数，传递地址时，交换两变量  *
*的值                                  *
***************************************/
#include <stdio.h>

void swap(int *p,int *q);

int main(){
    int a,b;
    printf("A:  ");
    scanf("%d",&a);
    printf("B:  ");
    scanf("%d",&b);
    swap(&a,&b);
    printf("A:%d\n",a);
    printf("B:%d\n",b);
    return 0;
}

void swap(int *p,int *q){
    int temp;
    temp = *p;
    *p = *q;
    *q = temp;
}
