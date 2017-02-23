#include<stdio.h>

int main(void)
{
    int i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,i11,check,sum1,sum2,total,end1,end2;
    printf("Enter the first 11 digits of a UPC:");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d",&i1,&i2,&i3,&i4,&i5,&i6,&i7,&i8,&i9,&i10,&i11);
    sum1=i1+i3+i5+i7+i9+i11;
    sum2=i2+i4+i6+i8+i10;
    total = sum1*3+sum2;
    end1= (total-1)%10;
    end2= 9-end1;
    printf("The check digit:%d",end2);

    return 0;
}
