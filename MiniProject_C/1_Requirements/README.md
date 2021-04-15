# Requirements
## Introduction
* This Mini Project in C Snake Game is a simple console application without graphics. In this project, you can play the popular “Snake Game” just like you played it elsewhere. You have to use the up, down, right or left arrows to move the snake.
* Foods are provided at the several co-ordinates of the screen for the snake to eat. Every time the snake eats the food, its length will by increased by one element along with the score.


## **History**

An early variation of tic-tac-toe was played in the Roman Empire, around the first century BC. It was called *terni laplilli* and instead of having any number of pieces, each player only had three, thus they had to move them around to empty spaces to keep playing. The game's grid markings have been found chalked all over Rome. Another closely related ancient game is three men’s morris which is also played on a smiple grid and requires three pieces in a row to finish.

![Images](images/three.png)

### **SWOT Analysis**

![SWOT](images/SWOT.png)

## **4 W and 1 H:**

## **Who:**

  Anyone

## **What:**

  This project will act as automated tictactoe board where player can mark Xs and Os.

  As a brain Teaser for Kids

## **When:**

  This project can be used during leisure and to pass time.
  
## **Where:**

  This project can be implemented anywhere.

## **How:**

  This Project will require two players and will take input in form of Xs and Os and perform operations based on player choice, depending on which a player may win or game will end in a draw.

## High Level Requirements:

| ID | Description |
| ----- | ----- |
| HR1 | Player 1 Lose/Win |
| HR2 | Player 2 Lose/Win |
| HR3 | Game Ends in a Draw |

## Low Level Requirements:

| ID | Description | HLR ID |
| ----- | ----- | ----- |
| LR1 | Player 1 plays with 'X'| HR1 |
| LR2 | Player 2 plays with 'O' | HR1 |
| LR3 | Player 1 gets the First Turn, can choose out of available square number| HR2 |
| LR4 | Player 2 gets the Second Turn, can choose out of available square number | HR2 |
| LR5 | If player selects an square number which is already chosen by another player display "Invalid move" | HR2
| LR5 | If player selects a square number out of valid number display "Invalid move" | HR2
| LR5 | If Player 1 gets 3 Xs in vertical, horizontal or diagonal row, Player 2 will lose.| HR3 |
| LR6 | If Player 2 gets 3 Os in vertical, horizontal or diagonal row, Player 2 will lose. | HR3 |
| LR7 | If all the turns are complete and no one wins, Game ends in a draw| HR3 |

