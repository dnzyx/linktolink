#include <stdio.h>
#include <stdlib.h>
/***************************************
函数名: information
函数功能:清屏并输出游戏的规则 
返回值:无（void） 
参数:  无（void） 
作者:宇宙第一聪明第一帅的dnzyx^*^
其他:  无 
******************************************/ 
void rule (void)
{
	system("cls");   
   	printf("                         游戏规则\n");
   	printf("-----------------------------------------------------------------\n");
   	printf("    玩家可以将2个相同的图案按照行 列数输入,最多拐弯2次就能将它们\n");
   	printf("消除,游戏过程中可输入'0 0'进行洗牌或输入'0 1'启动炸弹(随机消除三\n");
   	printf("对相同的图案),炸弹个数等于关卡减一(最多5个)，若图案全部消除,则玩\n"); 
   	printf("家胜出,此时会输出所用时间和分数,并提示玩家是否继续\n"); 
   	printf("----------------------------------------------------------------\n");
   	printf("                      分数计算公式(初始分:1000)\n");
   	printf("          分数=25*消除对数+关卡*消除对数*100-所用时间秒数\n");
   	printf("                若分数为负，则不显示分数 \n\n"); 
	system("pause");
} 
