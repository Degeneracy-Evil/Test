#include <stdio.h>

int main(void)
{
	int i,j,a[10],iTemp;
	
	printf("Ϊ����Ԫ�ظ�ֵ��\n");		//为数组元素赋值：...
	
	for (i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for (i=1;i<10;i++)
	{
		for (j=9;j>=i;j--)
		{
			if (a[j]<a[j-1])
			{
				iTemp=a[j-1];
				a[j-1]=a[j];
				a[j]=iTemp;
			}
		}
	}
	
	for (i=0;i<10;i++)
	{
		printf("%d\t",a[i]);
		if(i==4)
		{
			printf("\n");
		}
	}
	
	return 0;
}
