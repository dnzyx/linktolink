#ifndef JUDGE_H_INCLUDE
#define JUDGE_H_INCLUDE
/***************************************
函数名:  clear
函数功能: 通过调用其他函数，判断两图案是否可消 
返回值:  (int) 可消返回 1,否则返回 0 
参数:（int）x1,y1,x2,y2:两图案的坐标 
     （int） n:屏幕上所显示的宽度 
作者:宇宙第一聪明第一帅的dnzyx^*^
其他: 调用 error connect1,connect2,connect3,bord
******************************************/ 
extern char data[12][12];
int clear (int x1,int y1,int x2,int y2,int n);
#endif
