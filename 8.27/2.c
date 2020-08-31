#include <stdio.h>

int main(void)
{
	int i,n;
	int j,max;
	int sum=0;
	float average;
	char arr[5]={0};
	
	printf("ÇëÊäÈë5¸öÊı£º");
	for(i=0;i<5;i++)
	{
		scanf("%d",&arr[i]); 
	} 
	max = arr[0];
	for(j=0;j<5;j++)
	{
		sum += arr[j];
		if(max<arr[j])
		{
			max = arr[j]; 
		} 
	}
	
	average = 1.0/5 * sum;
	printf("max=%d,average =%f",max,average);
	
	return 0;
} 
