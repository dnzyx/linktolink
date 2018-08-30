#include <stdio.h>
char data[12][12];
void down (int n)
{
	int i,j,k;
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
		{
			if(data[i][j]==' ')
			{
				for (k=i;k>=1;k--)
				{
					data[k][j]=data[k-1][j];
				}
			}
		}
	}
}
