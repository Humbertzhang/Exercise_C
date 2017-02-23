/******************************************
*     传入长度为n数组，返回指向最大       *
*          元素的指针                     *
******************************************/
#include <stdio.h>

int *find_largest(int a[],int n);

int main()
{
    int n;
    printf("请输入数组长度：");
    scanf("%d",&n);
    int b[n];
    *find_largest(b,n);
    return 0;
}

int *find_largest(int a[],int n){
    int i,j,temp,*address_for_largest;
    for (i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for (i =0;i<n;i++){
        for (j = i+1;j<n;j++){
            if (a[i]>a[j]){
                temp = a[i];
                a[i]=a[j];
                a[j] = temp;
            }
        }
    }
    address_for_largest = &a[n-1];
    printf("%p\n",address_for_largest);
}
