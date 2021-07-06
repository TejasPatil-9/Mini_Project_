#include "fun.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
int score;
int x,y,flag;
int logic()
{
    sleep(0.75);
    switch(flag)
    {
        case 1:
            y--;
            break;
        case 2:
            x++;
            break;
        case 3:
            y++;
            break;
        case 4:
            x--;
            break;
        default:
            break;
    }
    if(x<0||x>h||y<0||y>w)
    {    
        gover=1;
        printf("Niceee but You crossed the line!! Try another Game..");
    }
    if(x==fx && y==fy)
    {
        label3:
            fx=rand()%20;
            if(fx==0)
                goto label3;
        label4:
            fy=rand()%20;
            if(fy==0)
                goto label4;
            score+=10;
    }
    return gover;
}
