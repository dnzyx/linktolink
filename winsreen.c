#include <stdio.h>
#include <windows.h>
/***************************************
函数名:winsreen
函数功能:清屏并输出游戏胜利界面
返回值: 无（void） 
参数:  （int） time:玩家所用的时间
	   （int） level:玩家选择的关卡 
	   （int） start:是否是刚开始 
作者:宇宙第一聪明第一帅的dnzyx^*^
其他:  无 
******************************************/ 
void winsreen(int Time,int level,int start)
{
  system("cls");
  printf("    *      *       *           *       *   \n");
  printf("      *   *      *   *         *       *   \n");
  printf("        *      *       *       *       *   \n");
  printf("        *       *       *      *       *   \n");
  printf("        *        *     *        *     *    \n");
  printf("        *          * *            ****   \n\n\n");
  if(start==1)
  Sleep(400);
  printf("  *         *          *    *        *****    \n");
  printf("   *        *         *             *      *  \n");
  printf("    *       *        *      *      *        * \n");
  printf("     *    *  *     *        *      *        * \n");
  printf("      *  *    *   *         *      *        * \n");
  printf("        *       *           *      *        * \n");
  if(start==1)
  Sleep(200);
  print_score(Time,level);
  printf("\n是否继续Y|N:");  
} 
