#ifndef TOOL_H_INCLUDE
#define TOOL_H_INCLUDE
/***************************************
������: tool
��������: ����������������ʹ�õ��߲�������Ӧ���� 
����ֵ:��int��ʹ�÷��� 1�����򷵻� 0 
����: 	(int) i,j:������������
	   ��int) n����Ļ������ʾ�������� 
		(int) level�����ѡ��Ĺؿ�  
		(int) *bombs: ը���� 
		(int) *nobomb���Ƿ�û��ը��,��Ϊ 1,����Ϊ 0   
	   ��int�� *use���Ƿ�ʹ�õ��� ,��Ϊ 1,����Ϊ 0  
		(int) *kills�������� 
����:�����һ������һ˧��dnzyx^*^
����: ͨ��ָ��͵���swap��bombʵ�� 
******************************************/
extern int start_time,score;
int tool(int i,int j,int n,int level,int *bombs,int *nobomb,int *use,int *kills,int *swaps);
#endif
