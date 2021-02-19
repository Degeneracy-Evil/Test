#include <stdio.h>
#include <math.h>

int main(void)
{
    int n, i; //输入正整数n
    printf("Please input:");
    while (scanf("%d", &n) != EOF && n != 0)
    {
        printf("%d=", n);
        for (i = 2; i <= sqrt(n); i++) //找出n的最小质因数，利用循环，反复求最小质因数
        {
            while (n != i)
            {
                if (0 == n % i)
                {
                    printf("%d*", i);
                    n = n / i;
                }
                if (n % i)
                    break;
            }
        }
        printf("%d\n", n);
        printf("Please input:");
    }
    return 0;
}
