#include <stdio.h>
#include <stdlib.h>
/************************************************
������:show_name
��������:�����������Ϸ�����͹ؿ����֣�
����ֵ: �ޣ�void�� 
����: ��int�� level:���ѡ��Ĺؿ�  
����:�����һ������һ˧��dnzyx^*^
����: �� 
**************************************************/
void show_name(int level)
{
	system("cls");
	if(level==1)
	{
		printf("��%d��: ��������",level); 
	}
	else if(level==2)
	{
		printf("��%d��: ţ��С��",level);
	}
	else if(level==3)
	{
		printf("��%d��: Ʈ�����",level);
	}
	else if(level==4)
	{
		printf("��%d��: ��������",level);
	}
	else if(level==5)
	{
		printf("��%d��: ������",level);
	}
	else if(level==6)
	{
		printf("��%d��: ����ǰ��",level);
	}
	else if(level==7)
	{
		printf("��%d��: һ��ҡ��",level);
	}
	else if(level==8)
	{
		printf("��%d��: �������",level);
	}
	else if(level==9)
	{
		printf("��%d��: Ư������",level);
	}
	else if(level==10)
	{
		printf("��%d��: �������",level);
	}
}
