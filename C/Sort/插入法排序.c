#include <stdio.h>

int main(void)
{
	int i,j,a[10],iTemp,iPos;
	
	printf("Ϊ����Ԫ�ظ�ֵ��\n");		//为数组元素赋值：...
	
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for (i=1;i<10;i++)
	{
		iTemp=a[i];
		iPos=i-1;
		for (;(iPos>=0)&&(iTemp<a[iPos]);iPos--)
		{
			a[iPos+1]=a[iPos];
		}
		a[iPos+1]=iTemp;
	}
	
	for(i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
		if(i==4)
		{
			printf("\n");
		}
	}
	
	return 0;
}
