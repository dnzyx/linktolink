#include <stdio.h>
#include <windows.h>
char data[12][12];
int score;
void print(int n,int start_time,int bombs)
{
    int i,j,k,usetime;
    usetime=time(NULL)-start_time;
	printf(" (С��ʾ:F6+�س�:�˳�, '0 0'+�س�:ϴ��, '0 1'+�س�:����ը��^*^)\n");
    printf("��ʱ: %2dʱ%2d��%2d��   ",usetime/3600,usetime/60,usetime%60); 
    for(k=1;k<=(2*n+1);k++)
    {
        if(k%2==0)
        printf("  %d",k/2);
    }
    printf("   ը����: %d",bombs);
    printf("   ������%-6d",score);
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
