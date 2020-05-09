#include <stdio.h>
#include <math.h>

double flut(double x);

int main(void)
{
    double a,b,c;
    scanf("%lf",&a);
    b=sqrt(a);                //将a开根
    c=flut(b);
    printf("a=%lf\n",a);
    printf("b=%lf\n",b);
    printf("c=%lf\n",c);
    return 0;
}

double flut(double x)    //作用是得到x,此函数需要修改
{
    double x,b;
    int a;
    b = x * x;
    while(1)
    {
        
    }
    return a;
}