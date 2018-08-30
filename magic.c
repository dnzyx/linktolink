#include <stdio.h>
#include <time.h>
#include <stdlib.h>
char data[12][12];
void magic (int level,int n)
{
	long long int rand_number;
	srand(time(NULL));
	 if(level==3)
	 {
	 	up(n); 
	 }
	else if(level==4)
	 {
	 	down(n); 
	 }
	else if(level==5)
	 {
		 right(n);
	 }
	else if(level==6)
	 {
	 	left(n); 
	 }
	else if(level==7)
	 {
	 	 rand_number=(rand()%2);
	 	 if(rand_number==0)
	 	 right(n);
	 	 else if(rand_number==1)
	 	 left(n);
	 }
	 else if(level==8)
	 {
	 	 rand_number=(rand()%2);
	 	 if(rand_number==0)
	 	 up(n);
	 	 else if(rand_number==1)
	 	 down(n);
	 }
	 else if(level==9)
	 {
	 	 rand_number=(rand()%4);
	 	 if(rand_number==0)
	 	 up(n);
	 	 else if(rand_number==1)
	 	 down(n);
	 	 else if(rand_number==2)
	 	 right(n);
	 	 else if(rand_number==3)
	 	 left(n);
	 }
	else if(level==10)
	 {
		swap(n);
	 	rand_number=(rand()%4);
	 	if(rand_number==0)
	 	up(n);
	 	else if(rand_number==1)
	    down(n);
	 	else if(rand_number==2)
	 	right(n);
	 	else if(rand_number==3)
	 	left(n);	
	 }
}
