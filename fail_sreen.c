#include <stdio.h>
#include <stdlib.h>
/************************************************
函数名:fail_sreen
函数功能:清屏并输出游戏失败界面：
          fail
		  ^*^ 
返回值:无（void） 
参数:  无（void） 
作者:宇宙第一聪明第一帅的dnzyx^*^
其他: 
****************************************************/
void fail_sreen(void)
{
	system("cls");
	printf("          ***                                 \n");
	printf("          *  *        **               *       *\n");
	printf("          *          *  *                      *\n");
	printf("       *******      *     *           **       *\n");
	printf("          *        *       *           *       *\n");
	printf("          *        *      * *          *       *\n");
	printf("     **   *         *    *    *  *     *       * **\n");
	printf("        * *           **       **      **      **\n");
	printf("          *                                    \n");
	printf("\n\n");
	printf("          *                 **                *\n");                                   
	printf("         *  *             *****              *  *\n");
	printf("        *     *         **********          *    *\n");
	printf("       *       *          ******           *      *\n");
    printf("      *          *          **            *        *\n");
}
