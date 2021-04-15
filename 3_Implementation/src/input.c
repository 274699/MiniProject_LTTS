#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include "fun.h"
void input(int flag, int gameover, int pause)
{
    
	if(kbhit())
	{
		switch(getch())
		{
			case'a':
		     flag= 1;
			 break;
			case'd':
			 flag=2;
			 break;
			case'w':
			 flag=3;
			 break;
			case's':
			 flag=4;
			 break;
			case'o':
			 gameover=1;
			 break;
			case'p':
			 pause=1;
			 break;
		}
	}
