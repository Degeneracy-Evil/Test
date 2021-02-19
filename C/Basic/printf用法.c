#include <stdio.h>

int main(void)
{
    int a = 4, b = 3, c = a/b;
    float d = *(float*)(&c);
    long long e = 0xffffffff;
    
    printf("a/b:%f, a:%d, b:%d\n", a/b, a,b);

    printf("(float)a/b:%f\n", ((float)a)/b);

    printf("(double)a/b:%f\n", ((double)a)/b);

    printf("d:%f\n",d);

    printf("%.*f\n", 20, (double)a/b);

    printf("e:%d,a:%d\n", e, a);

    printf("a:%d,++a:%d,a++:%d\n", a, ++a, a++);

    return 0;
}