#include <stdio.h>
#include <stdlib.h>
/***************************************
������:is_continue
��������:�����������Ϸʤ������,����ʾ����Ƿ���� 
����ֵ:��int) �������� 1,���򷵻� 0 
����:  ��int��use_time:������õ�ʱ�� 
	   ��int�� level:���ѡ��Ĺؿ� 
����:�����һ������һ˧��dnzyx^*^
����:  �� 
******************************************/ 
int is_continue(int use_time,int level)
{
	char op;
	int start=1;
	while(1)
	{
		fflush(stdin);
		if(level==10)
		{
			all_pass_sreen(use_time,level,start);
		}
		else
		{
			winsreen(use_time,level,start);
		}
    	start=0;
		if(scanf("%c",&op)!=1)
        {
			continue;
        }
        if(op=='y'||op=='Y')
        {
			return 1;
        }
        else if (op=='N'||op=='n')
        {
            return 0;
        }
   }
}
