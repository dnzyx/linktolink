#ifndef ERROR_H_INCLUDE
#define ERRIR_H_INCLUDE
/***************************************
函数名: error 
函数功能:  判断玩家所输入的图案坐标是否正确或图案是否符合规则 
返回值: 正确返回 0，错误返回 1 
参数: （int）x1,y1,x2,y2:两图案的坐标 
	  （int） n:屏幕上所显示的宽度 
作者:宇宙第一聪明第一帅的dnzyx^*^
其他: 无 
******************************************/ 
extern char data[12][12];
int error (int x1,int y1,int x2,int y2,int n);
#endif
