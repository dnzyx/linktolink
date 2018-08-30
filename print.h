#ifndef PRINT_H_INCLUDE
#define PRINT_H_INCLUDE
/***************************************
函数名: print
函数功能: 输出提示,时间,炸弹数和数组 
返回值:   无（void） 
参数: （int） n:屏幕上所显示的数组宽度
	（int) start_time:游戏开始的时间 
	 (int) bombs: 炸弹数	
作者:宇宙第一聪明第一帅的dnzyx^*^
其他: 无 
******************************************/
extern char data[12][12];
extern int score;
void print (int n,int start_time,int bombs);
#endif
