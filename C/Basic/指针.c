#include <stdio.h>

int main(void)
{
    int a=10,*p;
    p=&a;                    //p为a的地址
    printf("%x\n",p);
    printf("%o\n",p);
    
    p=a;                     //p为a的值
    printf("%d\n",p);
    
    return 0;
}