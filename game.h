#ifndef GAME_H_INCLUDE
#define GAME_H_INCLUDE
/***************************************
������:  game 
��������: ������Ϸ���� 
����ֵ:��int) ��ǰ�˳����� 1,ʤ���˳����� 0 
����: ��int�� n:��Ļ������ʾ�������� 
	  ��int)  start_time:��Ϸ��ʼ��ʱ�� 
    ��int�� level:���ѡ��Ĺؿ� 
����:�����һ������һ˧��dnzyx^*^
����: important!!! 
******************************************/ 
extern char data[12][12];
extern int star_time,score;
int game (int n,int level);
#endif
