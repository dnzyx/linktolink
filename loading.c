#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
/***************************************
������: loading
��������:������ؽ��� 
����ֵ:�ޣ�void�� 
����:  �ޣ�void�� 
����:�����һ������һ˧��dnzyx^*^
����:  �� 
******************************************/ 
void loading(void)
{
	int count=8;
	int i,j,k;
	for(k=1;k<count;k++)
	{
		system("cls");
		printf("  ���ڼ���,���Ե�......\n");
		printf("         ");
		for(i=1;i<=k;i++)
		{
			printf("��");
		}
		for(j=count-i;j>=0;j--)
		{
			printf ("��"); 	
		}
		printf("\n\n");
		ad();
		Sleep(500);
		
	}
	system("cls");
	printf("  ���ڼ���,���Ե�......\n");
	printf("         ");
	for(i=0;i<count;i++)
	{
		printf("��");
	}
	printf("\n�������ɽ���......\n\n"); 
	ad();
	Sleep(300); 
}
