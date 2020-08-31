#include <stdio.h>

int main(void)
{
    int i,j;
    int n;
    char arr[10] = {-8,-4,-3,0,1,2,4,5,8,9};
    printf("请输入一个数：");
    scanf("%d",&n);
    
    for(i=0;i<10;i++)
    {
        for(j=0;j<10-i;j++)
        {
            if((arr[j+i]!=arr[i])&&(arr[j+i]+arr[i]==n))
            {
                printf("%d , %d\r\n",arr[i],arr[j+i]);
            }
        }
    }
    
    return 0;
}
