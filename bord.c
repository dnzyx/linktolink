#include <stdio.h>
#include "connect1.h"
char data[12][12];
int bord (int x1,int y1,int x2,int y2)
{
	if(connect1(x1,y1,x1,0)&&connect1(x2,y2,x2,0))
	return 1;
	if(connect1(x1,y1,x1,11)&&connect1(x2,y2,x2,11))
	return 1;
	if(connect1(x1,y1,0,y1)&&connect1(x2,y2,0,y2))
	return 1;
	if(connect1(x1,y1,11,y1)&&connect1(x2,y2,11,y2))
	return 1;
	return 0;
}







/************************************************************
Ô­Àí
************************************************************** 
/*int bord (int x1,int y1,int x2,int y2)
{
    int i;
    int flag1=1,flag2=1,flag3=1,flag4=1;  
     for(i=y1-1;i>=0&&flag1;i--)
        {
          if(data[x1][i]!=' ')
           {
              flag1=0;
           }
        }
       for (i=y2-1;i>=0&&flag1;i--)
        {
           if(data[x2][i]!=' ')
             {
               flag1=0;
             }
        }
       /******
       for(i=y1+1;i<=11&&flag2;i++)
         {
            if(data[x1][i]!=' ')
              {
                flag2=0;
              }
         }   
       for (i=y2+1;i<=11&&flag2;i++)
         {
            if(data[x2][i]!=' ')
               {
                  flag2=0;
               }
         }
       /******
       for(i=x1-1;i>=0&&flag3;i--)
         {
            if(data[i][y1]!=' ')
             {
               flag3=0;
             }
          }
       for (i=x2-1;i>=0&&flag3;i--)
         {
            if(data[i][y2]!=' ')
              {
                 flag3=0;
              }  
         } 
         /********
       for (i=x1+1;i<=11&&flag4;i++)
         {
           if(data[i][y1]!=' ')
             {
               flag4=0;
             }
         }
        for (i=x2+1;i<=11&&flag4;i++)
          {
            if (data[i][y2]!=' ')
              {
                flag4=0;
              }
          }
        if(flag1||flag2||flag3||flag4)
        return 1;
        return 0;
    }*/
