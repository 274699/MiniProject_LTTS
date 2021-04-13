#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#include "fun.h"

int width=40,height=40;
int x,y,fruit_x,fruit_y,score,gameover,flag,pause=0;
int tailx[100],taily[100],counttail=0;


int main()
{
	int m,n;
	char c;
	label5:
	setup( gameover, x,  y,  width,  height, fruit_x,fruit_y, score);
	while(!gameover)
	{
	  draw( width, height, fruit_x, fruit_y, counttail, tailx, taily, score, x, y);
	 input(flag, gameover, pause);
	  logic( tailx, taily, x, y, counttail, flag, width, height, gameover, fruit_x, fruit_y, score );
	 for(m=0;m<1000;m++){
	 	for(n=0;n<100000;n++){
	 	 }
	 }
	}
	printf("\nPress Y to Continue again..");
	scanf("%c",&c);
	if(c=='y'||c=='Y')
	goto label5;
    return 0;
}
