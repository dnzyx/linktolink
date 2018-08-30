#include <stdio.h>
char data[12][12];
int noclear (int n)
{
	int i1,j1,i2,j2;
	for(i1=1;i1<=n;i1++)
	{
		for(j1=1;j1<=n;j1++)
		{
			for(i2=i1;i2<=n;i2++)
			{
				for(j2=j1;j2<=n;j2++)
				{
						if(clear(i1,j1,i2,j2,n))
						return 0;
				}
			}
		}
	}
	return 1;
}
