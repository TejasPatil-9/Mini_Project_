/**
 * @file draw.c
 * @author K C Pooja (poojachandkc@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
//this to have the whole boundary of game
#include "../inc/fun.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
int i,j,score;
int x,y,fx,fy;
int draw()
{
    system("cls");
    printf("...WELCOME TO THE SNAKE GAME...\n\n");
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            if(i==0||i==w-1)
            {
                printf("-");
            }
            else if(j==0||j==h-1)
                printf("|");
            else 
            {
                if(i==x && j==y)
                    printf("!");
                else if(i==fx && j==fy)
                    printf("*");
                else    
                    printf(" ");
            }   
        }
        printf("\n");
    }
    printf("\nYour Score:%d\n",score);
    printf("\nPress Q to Quit the Game...\n");
}

