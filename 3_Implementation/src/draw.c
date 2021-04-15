#include "fun.h"
#include <stdio.h>
#include<stdlib.h>
#include<conio.h>
void draw(int width, int height, int fruit_x, int fruit_y, int counttail, int tailx[], int taily[], int score, int x, int y)
{
    

	int i,j,k;
	system("cls");
	for(i=0;i<=width;i++)
	{
		for(j=0;j<=height;j++)
		{
			if(i==0||i==width||j==0||j==height)
			{
				printf("||");
			}
			else
			{
				if(i==x && j==y)
				 printf("O ");
				else if(i==fruit_x && j==fruit_y)
				 printf("F ");
				else
				{
					
					for(k=0;k<counttail;k++)
					{
					  if(i==tailx[k] && j==taily[k])
					  {
					  	printf("=");
					    
					  }
					}
					  
				       printf("  ");
				}
				 
			}
		}
		printf("\n");
	}
	printf("Press W A S D to control the snake and to start the game...\n");
	printf("SCORE: %d",score);
}
