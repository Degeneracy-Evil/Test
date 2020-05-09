#include <stdio.h>

int main(void)
{
    int a,b;
    int max;
    
    scanf("%d,%d",&a,&b);
    max=(a>b)?a:b;
    printf("The max=%d",max);
    
    return 0;
}