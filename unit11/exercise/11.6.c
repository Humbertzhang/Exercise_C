/**********************************************
*在数组中寻找第一和第二大的数                 *
**********************************************/
#include <stdio.h>

void find_largest_two(int a[] , int n, int *first,int *second);

int main(void){
    int one,two,n;
    printf("请输入数组长度\n");
    scanf("%d",&n);
    int b[n];
    find_largest_two(b,n,&one,&two);
    printf("LARGEAT：%d\n",one);
    printf("SECOND_LARGEST: %d\n",two);
    return 0;
}

void find_largest_two(int a[] , int n, int *first,int *second){
    int i,j,temp; 

    for (i =0;i<n;i++){
        scanf("%d",&a[i]);
    }

    for (i =0;i<n;i++){
        for(j = i+1;j<n;j++){
            if (a[i]>a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
           }
        }
    }
    *first = a[n-1];
    *second = a[n-2];
}

