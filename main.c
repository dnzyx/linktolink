#include <stdio.h>
#include <windows.h>
char data[12][12];
int start_time,score;
int main(int argc, char *argv[])
{
   	system("color bc");
    int use_time,flag,level;
    while(1)
    {
     	main_menu();
		fflush(stdin);
    	if(scanf("%d",&flag)!=1)
    	{
       	 	continue;
   		}
		if (flag==2)
     	{
           rule();
     	}
     	else if(flag==3)
     	{
       		break;//goto end;
     	}
     	else if (flag==4)
     	{
           information();
      	}
      	else if(flag==5)
      	{
      		more();
		}	
     	else if(flag==1)
     	 {
      		while(1)
      		{
      			level=selectlevel();
		   		if(level==0)//back
            	break;
            	use_time=time(NULL)-start_time;
            	if(is_continue(use_time,level)==0)
            	{
					goto end;
				}
      		}
      	}
	}
  end:
	bye();
    system("PAUSE");
    return 0;
}
