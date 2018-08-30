#include <stdio.h>
#include <stdlib.h>
/***************************************
函数名:fail
函数功能:清屏并输出游戏失败界面
返回值: 无（void） 
参数:  （int） time:玩家所用的时间 
作者:宇宙第一聪明第一帅的dnzyx^*^
其他:  无 
******************************************/
void fail(int time)
{
	int hour,secord,minimu;
    secord=time%60;
    minimu=(time/60)%60;
    hour=time/3600;
	fail_sreen();
	if(hour<1)
        printf("\n\n你失败了,共用时%d分%d秒,再来一次练练手吧^*^\n",minimu,secord);
    else
        printf("\n\n你失败了,共用时%d时%d分%d秒,再来一次练练手吧^*^\n",hour,minimu%60,secord);
    system("pause");
}
