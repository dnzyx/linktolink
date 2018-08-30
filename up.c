#include <stdio.h>
char data[12][12];
void up (int n)
{
	int i,j,k;
	for (i=n;i>=1;i--)
	{
		for(j=1;j<=n;j++)
		{
			if(data[i][j]==' ')
			{
				for(k=i;k<=n;k++)
				{
					data[k][j]=data[k+1][j];
				}
			}
		}
	}
}
