#ifndef GAME_H_INCLUDE
#define GAME_H_INCLUDE
/***************************************
函数名:  game 
函数功能: 进行游戏处理 
返回值:（int) 提前退出返回 1,胜利退出返回 0 
参数: （int） n:屏幕上所显示的数组宽度 
	  （int)  start_time:游戏开始的时间 
    （int） level:玩家选择的关卡 
作者:宇宙第一聪明第一帅的dnzyx^*^
其他: important!!! 
******************************************/ 
extern char data[12][12];
extern int star_time,score;
int game (int n,int level);
#endif
