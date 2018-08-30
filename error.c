#include <stdio.h>
#include <stdlib.h>
char data[12][12];
int error(int x1,int y1,int x2,int y2,int n)
{ 
  if(x1>n||x2>n||y1>n||y2>n)
  	return 1;
  if(x1<=0||x2<=0||y1<=0||y2<=0)
 	return 1;
  if(x1==x2&&y1==y2)
  	return 1;
  /***************************************************/
  if(data[x1][y1]==' '||data[x2][y2]==' ')
  	return 1;
  if(data[x1][y1]!=data[x2][y2])
  	return 1;
  return 0;
}
