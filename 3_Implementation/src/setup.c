#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "fun.h"
void setup(int gameover,int x, int y, int width, int height, int fruit_x,int fruit_y, int score)
{
    

	gameover=0;
	x=width/2;
	y=height/2;
	
	label1:
	fruit_x=rand()%40;
	if(fruit_x==0)
	goto label1;
	
	label2:
	fruit_y=rand()%28;
	if(fruit_y==0)
	goto label2;
	score=0;
} 
