#ifndef TOOL_H_INCLUDE
#define TOOL_H_INCLUDE
/***************************************
函数名: tool
函数功能: 根据玩家输入的坐标使用道具并进行相应处理 
返回值:（int）使用返回 1，否则返回 0 
参数: 	(int) i,j:玩家输入的坐标
	   （int) n：屏幕上所显示的数组宽度 
		(int) level：玩家选择的关卡  
		(int) *bombs: 炸弹数 
		(int) *nobomb：是否没有炸弹,是为 1,否则为 0   
	   （int） *use：是否使用道具 ,是为 1,否则为 0  
		(int) *kills：连消数 
作者:宇宙第一聪明第一帅的dnzyx^*^
其他: 通过指针和调用swap，bomb实现 
******************************************/
extern int start_time,score;
int tool(int i,int j,int n,int level,int *bombs,int *nobomb,int *use,int *kills,int *swaps);
#endif
