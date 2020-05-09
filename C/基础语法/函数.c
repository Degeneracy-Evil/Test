/**
 * 交换两个数字:
 * 使用函数
 * 实参与形参
 * 使用指针
*/
#include <stdio.h>
#include <stdlib.h>
void hello_1(int a,int b);
void hello_2(int *p, int *q);
void hello_3(int *x, int *y);

int main(void)
{
    int a1=3, b1=5;
    int *a1_p, *b1_q;
    a1_p = &a1, b1_q = &b1;

    hello_1(a1, b1);
    printf("%d,%d\n", a1, b1);

    hello_2(*a1_p, *b1_q);
    printf("%d,%d\n", a1, b1);

    //swap();
    hello_3(&a1, &b1);
    printf("%d,%d\n", a1, b1);      //ok
    system("pause");
    return 0;
}

void hello_1(int a,int b)        //error
{
    int t;
    t = a;
    a = b;
    b = t;
}

void hello_2(int *p, int *q)     //error
{
    int* r;
    r = p;
    p = q;
    q = r;
}

void hello_3(int *x,int *y)//使用指针传递地址
{
int temp;
temp=*x;
*x=*y;
*y=temp;
}