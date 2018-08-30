#include <stdio.h>

int score;
void cal_score(int time,int level)
{
	int add=0;
    if(level==1)//6*6
    	add=(18*100*level-time);
    else if(level==10)//10*10
        add=(50*100*level-time);
    else//8*8
        add=(32*100*level-time);
    if(add<0)
    add=0;
	score+=add;
}
