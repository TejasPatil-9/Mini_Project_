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
#include "fun.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
int i,j,score;
int x,y,fx,fy;
int draw()
{
    system("cls");
    for(i=0;i<h;i++)
    {
        for(j=0;j<w;j++)
        {
            if(i==0||i==w-1||j==0||j==h-1)
            {
                printf("|");
            }
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
    printf("Your Score:%d\n",score);
    printf("Press Q to Quit the Game...\n");
}

