#include <stdio.h>
#include <stdlib.h>
int start_time,score; 
int tool(int i,int j,int n,int level,int *bombs,int *nobomb,int *use,int *kills,int *swaps)
{
	if(i==0&&j==0)
    {
        swap(n);
        score-=5;
        *kills=0;
        *swaps=1;
        return 1;
    }
/***************************************************/
    if(i==0&&j==1)
    {
        *kills=0;
        if((*bombs)<=0)
        {
            *nobomb=1;
            return 1;
        }
        bomb(n,level);
        (*bombs)--;
    	*use=1;
    	return 1;
    }
    return 0;
}
