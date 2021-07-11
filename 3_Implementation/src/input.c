/**
 * @file input.c
 * @author K C Pooja (poojachandkc@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
//to provide direction for the snake 
#include "../inc/fun.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
int flag=0;
int input()
{
    if(kbhit())
    {
        switch(getch())
        {
            case 'j':
                flag=1;
                printf("\nLeft\n");
                break;
            case 'k':
                flag=2;
                printf("\nDown\n");
                break;
            case 'l':
                flag=3;
                printf("\nRight\n");
                break;
            case 'i':
                flag=4;
                printf("\nUp\n");
                break;
            case 'q':
                gover=1;
                printf("\n..Thank You for Playing the Game..\n\n");
                break;
            default:
                flag=0;
                gover=1;
                printf("\n..!Oops you pressed the wrong key..\n\n");
        }
    }
}