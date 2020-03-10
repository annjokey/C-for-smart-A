#include <stdio.h>

int main()
{
    int num[100];
    int cnt=0;
    char ch;
	int i,j;
    int cache,temp;

	/**** 录入数据 ****/
    printf("请输入一串数字（请用空格隔开并用回车键确认）："); 
	do
	{
		// use them or "scanf("%d",&num[cnt++]);"
		scanf("%d",&cache);
		num[cnt]=cache;
		cnt++;
	}while((ch=getchar())!='\n');
    
	/**** 排序 ****/
	/*for(i=cnt;i>0;i--)
	{
		for(j=0;j<i;j++)
		{
			if(num[j]>num[j+1])
			{
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}*/
	for(i=0; i<cnt; i++)
	{
		for(j=0; j<(cnt-i-1); j++)
		{
			if(num[j]>num[j+1])
			{
				temp=num[j];
				num[j]=num[j+1];
				num[j+1]=temp;
			}
		}
	}
	 
	/**** 输出 ****/
	printf("该组数字从小到大的排序为：");
    for(i=0; i<cnt; i++)
	{
		printf("%d\t",num[i]);
	}
	printf("\n");

	return 0;
}

    

