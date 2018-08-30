#include <stdio.h>
#include <stdlib.h>
/************************************************
函数名:show_name
函数功能:清屏并输出游戏关数和关卡名字：
返回值: 无（void） 
参数: （int） level:玩家选择的关卡  
作者:宇宙第一聪明第一帅的dnzyx^*^
其他: 无 
**************************************************/
void show_name(int level)
{
	system("cls");
	if(level==1)
	{
		printf("第%d关: 新手入门",level); 
	}
	else if(level==2)
	{
		printf("第%d关: 牛刀小试",level);
	}
	else if(level==3)
	{
		printf("第%d关: 飘向天空",level);
	}
	else if(level==4)
	{
		printf("第%d关: 地心引力",level);
	}
	else if(level==5)
	{
		printf("第%d关: 向左看齐",level);
	}
	else if(level==6)
	{
		printf("第%d关: 向右前进",level);
	}
	else if(level==7)
	{
		printf("第%d关: 一起摇摆",level);
	}
	else if(level==8)
	{
		printf("第%d关: 上下起伏",level);
	}
	else if(level==9)
	{
		printf("第%d关: 漂浮不定",level);
	}
	else if(level==10)
	{
		printf("第%d关: 进入地狱",level);
	}
}
