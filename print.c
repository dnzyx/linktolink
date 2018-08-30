#include <stdio.h>
#include <windows.h>
char data[12][12];
int score;
void print(int n,int start_time,int bombs)
{
    int i,j,k,usetime;
    usetime=time(NULL)-start_time;
	printf(" (小提示:F6+回车:退出, '0 0'+回车:洗牌, '0 1'+回车:启动炸弹^*^)\n");
    printf("用时: %2d时%2d分%2d秒   ",usetime/3600,usetime/60,usetime%60); 
    for(k=1;k<=(2*n+1);k++)
    {
        if(k%2==0)
        printf("  %d",k/2);
    }
    printf("   炸弹数: %d",bombs);
    printf("   分数：%-6d",score);
    printf("\n");
    for(i=1;i<=n;i++)
	{
        printf("                     ");
        for(k=0;k<=3*n;k++)
        {
        	printf("-");
        }
        printf("\n");
		printf("                  ");
		printf("%2d ",i);
		for(j=1;j<=n;j++)
        {
            printf("|%2c",data[i][j]);
		}
		printf("|\n");
	}
	printf("                     ");
	for(k=0;k<=3*n;k++)
    {
        printf("-");
    }
}
