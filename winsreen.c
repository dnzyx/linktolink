#include <stdio.h>
#include <windows.h>
/***************************************
������:winsreen
��������:�����������Ϸʤ������
����ֵ: �ޣ�void�� 
����:  ��int�� time:������õ�ʱ��
	   ��int�� level:���ѡ��Ĺؿ� 
	   ��int�� start:�Ƿ��Ǹտ�ʼ 
����:�����һ������һ˧��dnzyx^*^
����:  �� 
******************************************/ 
void winsreen(int Time,int level,int start)
{
  system("cls");
  printf("    *      *       *           *       *   \n");
  printf("      *   *      *   *         *       *   \n");
  printf("        *      *       *       *       *   \n");
  printf("        *       *       *      *       *   \n");
  printf("        *        *     *        *     *    \n");
  printf("        *          * *            ****   \n\n\n");
  if(start==1)
  Sleep(400);
  printf("  *         *          *    *        *****    \n");
  printf("   *        *         *             *      *  \n");
  printf("    *       *        *      *      *        * \n");
  printf("     *    *  *     *        *      *        * \n");
  printf("      *  *    *   *         *      *        * \n");
  printf("        *       *           *      *        * \n");
  if(start==1)
  Sleep(200);
  print_score(Time,level);
  printf("\n�Ƿ����Y|N:");  
} 
