#include <stdio.h>
#include <windows.h>
#include "game.h"
int start_time,score;
int selectlevel(void)
{
	int level,n,use_time;
	while(1)
	{
    	selectlevel_menu();
    	fflush(stdin);
		if(scanf("%d",&level)!=1)
    	{
       		continue;
    	}
		score=100;
    	while(1)
    	{
    		if(level==1)
    		{
       	 		n=6;
    		}
     		else if(level>=2&&level<=9)
    		{
        		n=8;
    		}
			else if(level==10)
    		{
        		n=10;
    		}		
			else if(level==11)
    		{
        		return 0;//back
    		}
			else
    		{   
        		break;
    		}
    		loading();
    		start_time=time(NULL);
    		
    		int flag=game(n,level);//start game 
    		
			use_time=time(NULL)-start_time;
    		if(flag==1)//F6 back 
    		{
    			break;
			}
			if(flag==-1)//fail
			{
				fail(use_time);
				break;
			}
			if(level==10)
			{
				return level;
			}
			if(is_continue(use_time,level)==0)
           	{
				break;
			}
			level++;
		}
	}
}
