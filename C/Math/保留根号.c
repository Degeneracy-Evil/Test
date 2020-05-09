#include <stdio.h>
#include <stdlib.h>

void MySqrt1(int A[]);

int main(void) 
{
    int A[3];
    char ch;

    do
    {
    printf("Please input num:");
    scanf("%d",&A[2]);

    MySqrt1(A);

    printf("%d*√%d\n", A[0], A[1]);
    
    printf("Do you want to continue(If yes, enter y or Y):\n");
    getchar();
    scanf("%c",&ch);
        
    }while('y' == ch || 'Y' == ch);
    printf("Beybey\n");
    system("pause");
    return 0;
}

void MySqrt1(int A[])        //作用是得到m开根后保留根号的值
{
    int n;
    for(n= *(A + 2) >> 1; 0 < n; n--) //n为m/2,because sqrt(m) <= m/2,优化time
    {
        if(0 == (*(A + 2)) % (n * n))
       {
           *A = n;
           *(A + 1) = *(A + 2)/(n * n);
           break;
       }
    }
}