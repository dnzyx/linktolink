#include <stdio.h>
#include <stdlib.h>
char data[12][12];
int connect2 (int x1,int y1,int x2,int y2)
{
	if(x1!=x2&&y1!=y2)
	{
		if(data[x2][y1]==' '&&connect1(x1,y1,x2,y1)&&connect1(x2,y1,x2,y2))
		return 1;
		if(data[x1][y2]==' '&&connect1(x1,y1,x1,y2)&&connect1(x1,y2,x2,y2))
		return 1;
		return 0;
	}
	return 0;
}
	
	
	
	
	


	



/************************************************************
Ô­Àí
**************************************************************	
/*int connect2 (int x1,int y1,int x2,int y2)
{
    int i;
    int flag1=1,flag2=1;
      if(x1!=x2&&y1!=y2)
      {
       if(x1>x2&&y1>y2)
          {
            for(i=x2+1;i<=x1;i++)
             {
                if(data[i][y2]!=' ')
                  {
                     flag1=0;
                     break;
                  }
               }
            for(i=y2;i<y1;i++)
              {
                if (a[x1][i]!=' ')
                  {
                    flag1=0;
                    break;
                  }  
               }
            /*************
           for (i=y2+1;i<=y1;i++)
               {
                 if(a[x2][i]!=' ')
                   {
                     flag2=0;
                     break;
                   }
                }  
           for (i=x2;i<x1;i++)
               {
                  if(a[i][y1]!=' ')
                    {
                       flag2=0;
                       break;
                    }   
               }
           
          }    
          
          /***************************************************
        if(x1>x2&&y1<y2)
           {
             for(i=x2+1;i<=x1;i++)
               {
                 if(a[i][y2]!=' ')
                   {
                      flag1=0;
                      break;
                    }
                } 
              for(i=y2;i<y1;i--)
                 {
                   if(a[x1][i]!=' ')
                   {
                      flag1=0;
                      break;
                    }
                  } 
              /*************
              for (i=y1+1;i<=y2;i++)
                 {
                    if(a[x1][i]!=' ')
                    {
                      flag2=0;
                      break;
                    }
                  }  
             for (i=x1;i>x2;i--)
                 {
                    if(a[i][y2]!=' ')
                    {
                      flag2=0;
                      break;
                    }
                  }
              
              } 
              /**********************************************
        if (x1<x2&&y1<y2)
          {
            for(i=x1+1;i<=x2;i++)
            {
              if(a[i][y1]!=' ')
                {
                      flag1=0;
                      break;
                }
            }
             for (i=y1;i<y2;i++)
             {
               if (a[x2][i]!=' ')
                {
                      flag1=0;
                      break;
                }
             }
               /***********
             for(i=y1+1;i<=y2;i++)
               {
               if(a[x1][i]!=' ')
                   {
                      flag2=0;
                      break;
                   }
               }
              for (i=x1;i<x2;i++)
               {
                 if(a[i][y2]!=' ')
                   {
                      flag2=0;
                      break;
                   }
               }
          
          }         
            /****************************************************
         if(x1<x2&&y1>y2)
          {
            for(i=x1+1;i<=x2;i++)
              {
                 if(a[i][y1]!=' ')
                 {
                      flag1=0;
                      break;
                  }
               }
            for (i=y1;i<y2;i--)
               {
                  if(a[x2][i]!=' ')
                  {
                      flag1=0;
                      break;
                  }
               }
            /****************
            for (i=y1+1;i<=y2;i--)
               {
                 if(a[x1][i]!=' ')
                   {
                      flag2=0;
                      break;
                    }
                }
            for (i=x1;i<x2;i++)
              {
                if(a[i][y2]!=' ')
                 {
                     flag2=0;
                     break;
                 }
              }
                 
           }
          
          if(flag1||flag2)
          {
             return 1;
          }
             return 0;
      
      }  
            return 0;
}
   */
