#include <stdio.h>
#include <limits.h>
int average(int a, int b);

int main(void)
{
    int a = 100;
    int b = INT_MAX - 10;
    printf("average a b:%d\n", average(a, b));
    return 0;
}

int average(int a,int b)
{
    //return ((a + b) / 2);     错误,返回-1073741779
    return (b - (b - a) / 2);   //正确,返回1073741869
}