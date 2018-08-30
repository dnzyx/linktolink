#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "burn.h"
char data[12][12];
void burn (int n,int level) 
{
	int i,j,flag;
	for (i=0;i<12;i++)
	{
		for (j=0;j<12;j++)
		{
			data[i][j]=' ';
		}
	}
/************************************/
	srand(time(NULL));
	for(i=1;i<=n/2;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(level>=1&&level<=6)
			{
				data[i][j]=rand()%6+1;
			}
			/*****/
			else if(level>=7&&level<=9)
			{
				flag=rand()%2;
				if(flag==1)
				{
					data[i][j]=rand()%6+1;
				}
				else if (flag==0)
				{
					data[i][j]=rand()%6+20;
				}
			}
			/*****/
			else
			{
				flag=rand()%2;
				if(flag==1)
				{
					data[i][j]=rand()%6+1;
				}
				else if (flag==0)
				{
					data[i][j]=rand()%8+20;
				}
			}
		}
	}
	/************************************
  	copy
	*************************************/
	for(i=n/2+1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			data[i][j]=data[i-n/2][j];
		}
    }
/***********************************/
   swap(n);
}
