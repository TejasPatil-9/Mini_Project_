#include "fun.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
int flag,gover;
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