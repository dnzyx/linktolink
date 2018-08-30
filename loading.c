#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/***************************************
函数名: loading
函数功能:输出加载界面 
返回值:无（void） 
参数:  无（void） 
作者:宇宙第一聪明第一帅的dnzyx^*^
其他:  无 
******************************************/ 
void loading(void)
{
	int count=8;
	int i,j,k;
	for(k=1;k<count;k++)
	{
		system("cls");
		printf("  正在加载,请稍等......\n");
		printf("         ");
		for(i=1;i<=k;i++)
		{
			printf("■");
		}
		for(j=count-i;j>=0;j--)
		{
			printf ("□"); 	
		}
		printf("\n\n");
		ad();
		Sleep(500);
		
	}
	system("cls");
	printf("  正在加载,请稍等......\n");
	printf("         ");
	for(i=0;i<count;i++)
	{
		printf("■");
	}
	printf("\n正在生成界面......\n\n"); 
	ad();
	Sleep(300); 
}
