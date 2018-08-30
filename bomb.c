#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
char data[12][12];
void bomb (int n,int level)
{
	int not_win=1;
    int times=3;//消3对 
    int i,j;//循环变量 
    int x1,y1,x2,y2;//座标 
    srand(time(NULL));
    while (times--)//消3对 
    {
      x1=rand()%6+1;
      y1=rand()%6+1;//随机找1个图案 
       if(data[x1][y1]==' ')//若为空格，跳出本次循环， 
       {
         times++;
         continue;
       }
      for(i=1;i<=n;i++)
        {
          for(j=1;j<=n;j++)
            {
              if(data[i][j]==data[x1][y1])
                {
                 x2=i;
                 y2=j;
                 break;
                }
            }
         }
        if(x2==x1&&y1==y2)
        {
        	times++;
            continue;
        }
    	 data[x1][y1]=data[x2][y2]=' ';
      	if(win(n))
     	{
     		not_win=0;
     		break;
	 	}
     }
     if(not_win)
     magic(level,n);
}
