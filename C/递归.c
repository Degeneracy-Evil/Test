#include <stdio.h>

int f(int a);

int main(void)
{
    int ax;
    printf("a = ");
    scanf("%d", &ax);
    int bx = f(ax);

    printf("age = %d", bx);

    return 0;
}

int f(int a)
{
    if (a)
        a = f(a - 1) + 2;
    return a;
}