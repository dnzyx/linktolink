#include <stdio.h>
/***************************************
������:  show 
��������: ���ݲ���������Ӧ����� 
����ֵ: �����������ȷ���귵�� 0�����򷵻� 1 
����:   (int) wrong: �Ƿ��������,��Ϊ 1,����Ϊ 0  
		(int) nobomb:�Ƿ�û��ը��,��Ϊ 1,����Ϊ 0  
		(int) Noclear:�Ƿ����ƿ���,��Ϊ 1,����Ϊ 0  
		(int) kills:������ 
		(int) start:�Ƿ�տ�ʼ ,��Ϊ 1,����Ϊ 0  
		(int) use:�Ƿ�ʹ��ը�� ,��Ϊ 1,����Ϊ 0  
		(int) swaps:�Ƿ�����ϴ�� ,��Ϊ 1,����Ϊ 0 
		(int) shutdown:�Ƿ� shutdown,��Ϊ 1,����Ϊ 0 
����:�����һ������һ˧��dnzyx^*^
����: �� 
******************************************/ 
int show(int wrong,int nobomb,int Noclear,int kills,int start,int use,int swaps,int shutdown)
{
	if(use==1)
	return 1;
	if(shutdown==1)
	{
		printf("shutdown! ����20��!");
		return 1;
	}
	else if(swaps==1)
	{
		printf("����ϴ�ƣ�����5��!");
		return 1;
	}
	
	else if(wrong==1)
    {
        printf("�������!����������! ����15�֣�");
        return 1;
	}
	else if(Noclear==1)
	{
		 printf("���ƿ���������ϴ��! ����30�֣�");
		 return 1;
	}
	else if(nobomb==1)
	{
		printf("��������ը����û��ը��!");
		return 1;
	}

	else if(wrong==0)
	{
		if (start)
		printf("First Blood!");
		else if(kills==1)
		printf("Accepted!");
		else if(kills==2)
		printf("Double Kill!");
		else if(kills==3)
		printf("Trible Kill!");
		else if(kills==4)
		printf("quatre kill!");
		else if(kills==5)
		printf("Panta Kill!");
		else if(kills>5)
		printf("legendary kill!");
	}
	return 0;
}
