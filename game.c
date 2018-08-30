#include <stdio.h>
#include <windows.h>
int start_time,score;
char data[12][12];
int game (int n,int level)
{
    int x1,y1,x2,y2,scan;
    int wrong=0,nobomb=0,Noclear=0,kills=0,start=1,use=1,swaps=0,shutdown=0;
    int bombs=((level-1>=5)?5:level-1),before_time,kill_time;
    burn(n,level);
    while (1)
    {
        fflush(stdin);
        if(score<0)
        return (-1);
        show_name(level);
        print(n,start_time,bombs);
        Sleep(100);
        if(wrong==0)
        {
        	before_time=time(NULL);//get time
		}
        if(show(wrong,nobomb,Noclear,kills,start,use,swaps,shutdown)==0)
        {
        	start=0;
		}
		wrong=nobomb=Noclear=swaps=use=shutdown=0;//Reset!
        if(noclear(n))
        {
            swap(n);
            magic(level,n);
            Noclear=1;
            kills=0;
			score-=10;
            Sleep(150);
			continue;
		}
        printf("\n请输入第一个的行与列 (用空格隔开):");
        scan=scanf("%d%d",&x1,&y1);
        if(scan==EOF)
        return 1;//F6 提前退出
		if(scan!=2)
        goto deal;
        if(tool(x1,y1,n,level,&bombs,&nobomb,&use,&kills,&swaps)==1)
        {
        	if(win(n))
        	return 0;
        	continue;
		}
        fflush(stdin);
        printf("\n请输入第二个的行与列 (用空格隔开):");
        scan=scanf("%d%d",&x2,&y2);
        if(scan==EOF)
        return 1;//F6 提前退出 
        if(scan!=2)
        goto deal;
        if(tool(x2,y2,n,&bombs,&nobomb,&use,&kills)==1)
        {
        	if(win(n))
        	return 0;
        	continue;
		}
        if(clear(x1,y1,x2,y2,n))
        {
        	data[x1][y1]=data[x2][y2]=' ';
			kill_time=time(NULL)-before_time;
        	if(kill_time>10)//overtime!
        	kills=0;
			kills++;
			score+=25;
        }
        else
        {
		deal:wrong=1;
			score-=15;
			if(kills>=2)
			{
				shutdown=1;
				score-=5;
			}
			kills=0;
            continue;
      	}
        if(win(n))
        return 0;
        magic(level,n);
    }
 }
