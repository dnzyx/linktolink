#include <stdio.h>
#include <windows.h>
/************************************************
��������all_pass_sreen 
��������:���������ͨ�ؽ��棺
          bingo
		  ^*^ 
����ֵ:�ޣ�void�� 
����:  ��int�� time:������õ�ʱ��
	   ��int�� level:���ѡ��Ĺؿ� 
	   ��int�� start:�Ƿ��Ǹտ�ʼ  
����:�����һ������һ����Ůlqq^*^
����: �� 
****************************************************/
void all_pass_sreen(int Time,int level,int start) 
{
    system("cls");
	printf("     **           **          ****             *****          ***    \n");
	printf("     **           **       **      **        *      *       *      * \n");
	printf("     **                    *        *        *      *      *        *\n");
	printf("     **           **       *        *        *      *      *        *\n");
	printf("     ** ***       **       *        *         *******      *        *\n");
	printf("     **     *     **       *        *               *      *        *\n");
	printf("     **    *      **       *        *        *      *       *      * \n");
	printf("     ** ***       **       *        *          ******          *** \n");
	printf("\n\n\n");
	if(start==1)
  	Sleep(400);
	printf("       *                 **                *\n");                                   
	printf("      *  *             *****              *  *\n");
	printf("     *     *         **********          *    *\n");
	printf("    *       *          ******           *      *\n");
    printf("   *          *          **            *        *\n");
    if(start==1)
  	Sleep(200);
  	print_score(Time,level);
  	printf("\n����ͨ��,�Ƿ����Y|N:");
}
