/**
 * 若定义一个数组a[n]
 * 在定义时n与元素个数相等
 * 
 * 在使用时最大为a[n-1]
 * 最小为0
*/
#include <stdio.h>

int main(void)
{
    int a[5] = {1,2,3,4,5};   //a为指向a[0]的指针
    int i;

    for(i = 0; i <= 4; i++)
    {
        printf("%d\n",a[i]);
    }

    printf("%o",*a);
    
    return 0;
}