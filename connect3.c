#include <stdio.h>
char data[12][12];
int connect3 (int x1,int y1,int x2,int y2)
{
    int i;
      for (i=x1+1;i<=11&&data[i][y1]==' ';i++)
        {
           if(connect1(x1,y1,i,y1)&&connect2(i,y1,x2,y2))
             {
               return 1;
             
             }
        }
       for (i=x1-1;i>=0&&data[i][y1]==' ';i--)
        {
           if(connect1(x1,y1,i,y1)&&connect2(i,y1,x2,y2))
             {
               return 1;
           
             }
        }       
         for (i=y1+1;i<=11&&data[x1][i]==' ';i++)
        {
           if(connect1(x1,y1,x1,i)&&connect2(x1,i,x2,y2))
             {
                return 1;
      
             }
        }
         for (i=y1-1;i>=11&&data[x1][i]==' ';i--)
        {
           if(connect1(x1,y1,x1,i)&&connect2(x1,i,x2,y2))
             {
               return 1;
      
             }
        } 
        /****************************************************/
          for (i=x2+1;i<=11&&data[i][y2]==' ';i++)
        {
           if(connect1(x2,y2,i,y2)&&connect2(i,y1,x1,y1))
             {
               return 1;
             
             }
        }
       for (i=x2-1;i>=0&&data[i][y2]==' ';i--)
        {
           if(connect1(x2,y2,i,y2)&&connect2(i,y2,x1,y1))
             {
               return 1;
           
             }
        }       
         for (i=y2+1;i<=11&&data[x2][i]==' ';i++)
        {
           if(connect1(x2,y2,x2,i)&&connect2(x2,i,x1,y1))
             {
                return 1;
      
             }
        }
         for (i=y2-1;i>=11&&data[x2][i]==' ';i--)
        {
           if(connect1(x2,y2,x2,i)&&connect2(x2,i,x1,y1))
             {
               return 1;
      
             }
        }  
         return 0;
        }
