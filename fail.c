#include <stdio.h>
#include <stdlib.h>
/***************************************
������:fail
��������:�����������Ϸʧ�ܽ���
����ֵ: �ޣ�void�� 
����:  ��int�� time:������õ�ʱ�� 
����:�����һ������һ˧��dnzyx^*^
����:  �� 
******************************************/
void fail(int time)
{
	int hour,secord,minimu;
    secord=time%60;
    minimu=(time/60)%60;
    hour=time/3600;
	fail_sreen();
	if(hour<1)
        printf("\n\n��ʧ����,����ʱ%d��%d��,����һ�������ְ�^*^\n",minimu,secord);
    else
        printf("\n\n��ʧ����,����ʱ%dʱ%d��%d��,����һ�������ְ�^*^\n",hour,minimu%60,secord);
    system("pause");
}
