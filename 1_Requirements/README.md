# Requirements
## Introduction
* This Mini Project in C Snake Game is a simple console application without graphics. In this project, you can play the popular “Snake Game” just like you played it elsewhere. You have to use the up, down, right or left arrows to move the snake.
* Foods are provided at the several co-ordinates of the screen for the snake to eat. Every time the snake eats the food, its length will by increased by one element along with the score.


## **History**

Snake first appeared in 1997 on the Nokia 6110, along with the games Logic and Memory. It was programmed by Taneli Armanto, a design engineer in Nokia. The concept originated from the 1976 arcade game ‘Blockade’, developed and published by Gremlin.Snake first featured on Nokia handsets in the late 90s and since then has appeared on over 400 million phones. Users will no longer have to dig out their old handsets to get their nostalgia fix, instead HMD Global invites the world to unite through the free game and challenge friends to play, using Facebook’s Instant Games platform.

![Images](https://github.com/274699/MiniProject_Template/blob/d8bf4af389008190d0c922402afc9e51e40a0731/MiniProject_C/6_ImagesAndVideos/history_nokia.jpg)

### **SWOT Analysis**

![SWOT](https://github.com/274699/MiniProject_Template/blob/4ddf3f7d180d1126f6a3a48999c4bfa5f964c7d7/MiniProject_C/6_ImagesAndVideos/SWOT.png)

## **4 W and 1 H:**

## **Who:**

  Anyone who is having some time to kill.

## **What:**

  This project will act as snake game where snake have to catch food to grow. User can control it with W A S D keys.

  As a brain Teaser for Kids

## **When:**

  This project can be used during leisure and to pass time.
  
## **Where:**

  This project can be implemented anywhere.

## **How:**

  This Project will require one player and will take input in form of W A S and D and perform operations based on player choice, depending on which a player can make a highest score.

## High Level Requirements:

| ID | Description |
| ----- | ----- |
| HR1 | Player uses right input keys |
| HR2 | Player hits the highest score |
| HR3| 3 lifes  |
| HR4 | Game Ends  |

## Low Level Requirements:

| ID | Description | HLR ID |
| ----- | ----- | ----- |
| LR1 | Player  press 'W for forward movement'| HR1 |
| LR2 | Player press 'A for left side movement' | HR1 |
| LR3 | Player press 'D for right side movement' | HR1 |
| LR4 | Player press 'S for backward movement' | HR1 |
| LR5 | If player crosses the previous score itt will be counted as highest score| HR2
| LR5 |Player wil get 3 lives to play and th score of all 3 lives will be summed| HR3 |
| LR6 | If snake collide with its own body one life will be decreased | HR4 |
| LR7 | If snake collides with the wall of arena  one life will be decreased| HR4 |

