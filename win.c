#include <stdio.h>
char data[12][12];
int win (int n)
{
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
           	if(data[i][j]!=' ')
           	{
            	return 0;
           	}
        }
    }
    return 1;
}
