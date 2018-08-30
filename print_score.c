#include <stdio.h>

int score;
void print_score (int time,int level)
{ 
    int score;
    int hour,secord,minimu;
    secord=time%60;
    minimu=time/60;
    hour=time/3600;
    score=cal_score(time,level);
    if(hour<1)
       	printf("\n\n共用时%d分%d秒,得分%d分,再来一次挑战自己吧^*^",minimu,secord,score);
	else
        printf("\n\n共用时%d时%d分%d秒,得分%d分,再来一次挑战自己吧^*^",hour,minimu%60,secord,score);
}
