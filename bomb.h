#ifndef BOMB_H_INCLUDE
#define BOMB_H_INCLUDE
/***************************************
函数名:  bomb 
函数功能: 随机消除3对相同的图案 (若提前消完，立即结束!) 
返回值:无 （void) 
参数:（int） n:屏幕上所显示的数组宽度
    （int） level:玩家选择的关卡 
作者:宇宙第一聪明第一帅的dnzyx^*^
其他: 无 
******************************************/ 
extern char data[12][12];
void bomb (int n,int difficlut);
#endif
