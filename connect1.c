#include <stdio.h>
char data[12][12];
int connect1 (int x1,int y1,int x2,int y2)
{
    int i,j;
     if(x1==x2||y1==y2)
     {
     if(x1==x2)
     {
       if(y1<y2)
         {
           for (i=y1+1;i<y2;i++)
             if(data[x1][i]!=' ')
               return 0;
         }
         if(y1>y2)
         {
           for (i=y2+1;i<y1;i++)
             if(data[x1][i]!=' ')
             return 0;
         }
      }
      if(y1==y2)
      {
       if(x1<x2)
         {
           for (i=x1+1;i<x2;i++)
             if(data[i][y1]!=' ')
              return 0;
           }
         if(x1>x2)
         {
           for (i=x2+1;i<x1;i++)
             if(data[i][y1]!=' ')
               return 0;
         }
      }
      return 1;
    }
	return 0;
}
