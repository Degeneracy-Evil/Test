#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
    char ch;
    float a,b,c;
    double delta,x1,x2;
    do
    {
        printf("please enter:\n");
        scanf("%f,%f,%f",&a,&b,&c);
    
        delta = b*b-4*a*c;
        x1=(-b+sqrt(delta))/(2*a);
        x2=(-b-sqrt(delta))/(2*a);
        
        printf("a=%f,b=%f,c=%f\n",a,b,c);
        printf("delta=%lf\n",delta);
    
        if(delta > 0)
        {
            printf("x1=%lf\nx2=%lf\n",x1,x2);
        }
        else if(delta==0)
        {
            printf("x1=x2=%lf\n",x1);    
        }
        else
        {
            printf("Don't have result!\n");
        }
        
        printf("Do you want to continue(If yes, enter y or Y):\n");
        getchar();
        scanf("%c",&ch);
        
    }while('y' == ch || 'Y' == ch);
    
    printf("OK,Goodbey!\n");
    system("pause");
    return 0;
}