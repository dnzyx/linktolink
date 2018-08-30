#include <stdio.h>
char data[12][12];
void left(int n)
{
	int i,j,k;
	for (i=1;i<=n;i++)
	{
		for (j=n;j>=1;j--)
		{
			if(data[i][j]==' ')
			{
				for(k=j;k>=1;k--)
				{
			    	data[i][k]=data[i][k-1];
			    }
			}
		}
	}
}
