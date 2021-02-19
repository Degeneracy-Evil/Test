#include <stdio.h>

int main(void)
{
    printf("The input format is:(x1,y1)(x2,y2)\n");
    printf("PS:Parentheses need to be in English\n");
    char ch;

    do
    {
        double x1, x2, y1, y2, b, k;
        
        printf("please enter:\n");
        scanf("(%lf,%lf)(%lf,%lf)", &x1, &y1, &x2, &y2);
        getchar();
        
        b = (x1 * y2 - x2 * y1) / (x1 - x2);
        k = (y1 - y2) / (x1 - x2);
        
        printf("k=%.3lf,b=%.3lf\n", k, b);
        
        if (b > 0)
        printf("y=%.3lfx+%.3lf\n", k, b);
        else if (b == 0)
        printf("y=%.3lfx\n", k);
        else
        printf("y=%.3lfx%.3lf\n", k, b);
        
        printf("Whether to continue(Y/N):\n");
        scanf("%c", &ch);
        getchar();
    
    }while('y' == ch || 'Y' == ch);

    printf("Goodbey!\n");
    printf("exit the program!\n");
    
    return 0;
}