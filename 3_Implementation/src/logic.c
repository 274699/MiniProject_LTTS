#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "fun.h"
void logic(int tailx[], int taily[], int x, int y, int counttail,int flag,int width, int height, int gameover, int fruit_x, int fruit_y, int score )
{
    
	int i;
	int prevx=tailx[0],prevy=taily[0];
	int prev2x, prev2y;
	tailx[0]=x;
	taily[0]=y;
	for(i=1;i<counttail;i++)
	{
		prev2x=tailx[i];
		prev2y=taily[i];
		tailx[i]=prevx;
		taily[i]=prevy;
		prevx=prev2x;
		prevy=prev2y;
	}
	
	
	switch(flag)
	{
		case 1:
			y--;
			break;
		case 2:
			y++;
			break;
		case 3:
			x--;
		    break;
		case 4:
			x++;
			break;
		default:
			break;
	}
	if(x<0||x>width||y<0||y>height)
	gameover=1;
	if(x==fruit_x && y==fruit_y)
	{
		label3:
	fruit_x=rand()%28;
	if(fruit_x==0)
	goto label3;
	
	label4:
	fruit_y=rand()%28;
	if(fruit_y==0)
	goto label4;
	score+=10;
	counttail++;
	}
}
