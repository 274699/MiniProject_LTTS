/**
 * @file fun.h
 * @author Vishal_274699 
 * @brief header file for the functions in snake game
 * @version 0.1
 * @date 2021-04-12
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __FUN_H__
#define __FUN_H__

/**
 * @brief This function will set the location of fruit in the game.
 * 
 * @param gameover 
 * @param x 
 * @param y 
 * @param width 
 * @param height 
 * @param fruit_x 
 * @param fruit_y 
 * @param score 
 */

void setup(int gameover,int x, int y, int width, int height, int fruit_x,int fruit_y, int score);

 /**
  * @brief This function will draw the arena and fruit position.
  * 
  * @param[in] width
  * @param[in] height 
  * @param[in] fruit_x 
  * @param[in] fruit_y 
  * @param[in] counttail 
  * @param[in] tailx 
  * @param[in] taily 
  * @param[in] score 
  * @param[in] x 
  * @param[in] y 
  */
int draw(int width, int height, int fruit_x, int fruit_y, int counttail, int tailx[], int taily[], int score, int x, int y);

/**
 * @brief This function will take input from the player.
 * 
 * @param flag 
 * @param gameover 
 * @param pause 
 */
int input(int flag, int gameover, int pause);

/**
 * @brief This function will increase the length of snake and decide the next position of fruit.
 * 
 * @param tailx 
 * @param taily 
 * @param x 
 * @param y 
 * @param counttail 
 * @param flag 
 * @param width 
 * @param height 
 * @param gameover 
 * @param fruit_x 
 * @param fruit_y 
 * @param score 
 */
void logic(int tailx[], int taily[], int x, int y, int counttail,int flag,int width, int height, int gameover, int fruit_x, int fruit_y, int score );
 
#endif
