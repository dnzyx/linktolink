#include <stdio.h>
#include <stdlib.h>
#include <time.h>
char data[12][12];
void swap (int n)
{

	srand(time(NULL));

	do
	{
		int times=88;
    	int i,j,i1,j1;
   		char t;
       	while (times--)
    	{
         	i=rand()%n+1;
         	j=rand()%n+1;
        	i1=rand()%n+1;
         	j1=rand()%n+1;
         	t=data[i][j];
         	data[i][j]=data[i1][j1];
         	data[i1][j1]=t;
    	}

	}while(noclear(n));
}
 
