#include <stdio.h>

void CelerityRun(int left,int right,int array[]);

int main(void)
{
	int i,a[10];
	
	printf("Ϊ����Ԫ�ظ�ֵ��\n");		//为数组元素赋值：...
	
	for(i=0;i<10;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&a[i]);
	}
	
	CelerityRun(0,9,a);
	
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

void CelerityRun(int left,int right,int array[])
{
	int i,j;
	int middle,iTemp;
	
	i=left;
	j=right;
	middle=array[(left+right)/2];
	
	do
	{
		while((array[i]<middle)&&(i<right))
		{
			i++;
		}
		while((array[j]>middle)&&(j>left))
		{
			j--;
		}
		
		if (i<=j)
		{
			iTemp=array[i];
			array[i]=array[j];
			array[j]=iTemp;
			i++;
			j--;
		}
	}while(i<=j);
	
	if (left<j)
	{
		CelerityRun(left,j,array);
	}
	if(right>i)
	{
		CelerityRun(i,right,array);
	}
}
