#include <stdio.h>

int main(void)
{
	int i,j,a[10],iTemp;
	
	printf("Ϊ����Ԫ�ظ�ֵ��\n");		//为数组元素赋值：...
	
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	for (i=0;i<9;i++)
	{
		for(j=i+1;j<10;j++)
		{
			if (a[j]<a[i])
			{
				iTemp=a[i];
				a[i]=a[j];
				a[j]=iTemp;
			}
		}
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
