#include <stdio.h>

int main(void)
{
    int a,ch;
    
    scanf("%d",&ch);
    
    a=(90<=ch)&&(100>=ch);    /*将a变为逻辑值，方便使用switch*/
    
    switch(a)
    {
        case 1:
            printf("You are A!");
            break;
        
        case 0:
            printf("You are B!");
            break;
        
        default :                                    /**
            break;                                     *并不需要存在
    }                                                  *只是学习
    system("pause");                                   */
    return 0;
}