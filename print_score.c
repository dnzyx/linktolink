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
       	printf("\n\n����ʱ%d��%d��,�÷�%d��,����һ����ս�Լ���^*^",minimu,secord,score);
	else
        printf("\n\n����ʱ%dʱ%d��%d��,�÷�%d��,����һ����ս�Լ���^*^",hour,minimu%60,secord,score);
}
