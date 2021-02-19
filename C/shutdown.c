#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int c, j;
games:
    printf("1:死机\n");
    printf("2:机房爆炸\n");
    printf("请选择:");
    
    scanf("%d",&c);
    
    if(c == 1)
        system("shutdown -s -t 600");
    else if(2 == c)
    {
        for(j = 1; j <= 10; ++j)
            system("start");
    }
    else 
    {
        printf("Please input again!\n");
        goto games;
    }
    
    return 0;
}