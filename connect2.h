#ifndef CONNECT2_H_INCLUDED
#define CONNECT2_H_INCLUDED
/***************************************
函数名: connect2  
函数功能:  判断在转1个弯的情况下,两图案是否可消
返回值:  (int) 可消返回 1,否则返回 0 
参数:  （int）x1,y1,x2,y2:两图案的坐标 
作者:宇宙第一聪明第一帅的dnzyx^*^
其他: 调用connect1 实现 
******************************************/ 
extern char data[12][12];
int connect2 (int x1,int y1,int x2,int y2);
#endif
