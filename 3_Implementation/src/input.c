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
#include "fun.h"
int flag;
int input()
{
    if(kbhit())
    {
        switch(getch())
        {
            case 'j':
                flag=1;
                printf("Left");
                break;
            case 'k':
                flag=2;
                printf("Down");
                break;
            case 'l':
                flag=3;
                printf("Right");
                break;
            case 'i':
                flag=4;
                printf("Up");
                break;
            case 'q':
                gover=1;
                printf("Why!! Lets Play another game...\n");
                break;
        }
    }
}