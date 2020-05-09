#include <stdio.h>
#include <math.h>

float SquareRootFloat(float number)
{
    long i;
    float x, y;
    const float f = 1.5F;

    x = number * 0.5F;
    y  = number;
    i  = * ( long * ) &y;
    i  = 0x5f375a86 - ( i >> 1 );
    y  = * ( float * ) &i;
    y  = y * ( f - ( x * y * y ) );
    y  = y * ( f - ( x * y * y ) );
    return number * y;
}

int main()
{
    int n;
    
    printf("n = ");
    scanf("%d",&n);
    printf("%.3f",SquareRootFloat(n));
    return 0;
}