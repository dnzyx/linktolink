#include <stdio.h>
#include <stdlib.h>
/***************************************
函数名:is_continue
函数功能:清屏并输出游戏胜利界面,并提示玩家是否继续 
返回值:（int) 继续返回 1,否则返回 0 
参数:  （int）use_time:玩家所用的时间 
	   （int） level:玩家选择的关卡 
作者:宇宙第一聪明第一帅的dnzyx^*^
其他:  无 
******************************************/ 
int is_continue(int use_time,int level)
{
	char op;
	int start=1;
	while(1)
	{
		fflush(stdin);
		if(level==10)
		{
			all_pass_sreen(use_time,level,start);
		}
		else
		{
			winsreen(use_time,level,start);
		}
    	start=0;
		if(scanf("%c",&op)!=1)
        {
			continue;
        }
        if(op=='y'||op=='Y')
        {
			return 1;
        }
        else if (op=='N'||op=='n')
        {
            return 0;
        }
   }
}
