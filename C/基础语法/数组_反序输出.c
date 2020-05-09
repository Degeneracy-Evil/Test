#include <stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int A[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &A[n - i]);
    }
    for (int i--; i; i--)
    {
        printf("%d,", A[n - i]);
    }

    return 0;
}