#include <stdio.h>
/***************************************
函数名:  show 
函数功能: 根据参数进行相应的输出 
返回值: 当玩家输入正确坐标返回 0，否则返回 1 
参数:   (int) wrong: 是否输入错误,是为 1,否则为 0  
		(int) nobomb:是否没有炸弹,是为 1,否则为 0  
		(int) Noclear:是否无牌可消,是为 1,否则为 0  
		(int) kills:连消数 
		(int) start:是否刚开始 ,是为 1,否则为 0  
		(int) use:是否使用炸弹 ,是为 1,否则为 0  
		(int) swaps:是否申请洗牌 ,是为 1,否则为 0 
		(int) shutdown:是否 shutdown,是为 1,否则为 0 
作者:宇宙第一聪明第一帅的dnzyx^*^
其他: 无 
******************************************/ 
int show(int wrong,int nobomb,int Noclear,int kills,int start,int use,int swaps,int shutdown)
{
	if(use==1)
	return 1;
	if(shutdown==1)
	{
		printf("shutdown! 倒扣20分!");
		return 1;
	}
	else if(swaps==1)
	{
		printf("申请洗牌，倒扣5分!");
		return 1;
	}
	
	else if(wrong==1)
    {
        printf("输入错误!请重新输入! 倒扣15分！");
        return 1;
	}
	else if(Noclear==1)
	{
		 printf("无牌可消，重新洗牌! 倒扣30分！");
		 return 1;
	}
	else if(nobomb==1)
	{
		printf("你已用完炸弹或没有炸弹!");
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
