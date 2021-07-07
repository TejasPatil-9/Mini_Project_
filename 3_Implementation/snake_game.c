/**
 * @file snake_game.c
 * @author K C Pooja (poojachandkc@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<unistd.h>
int i,j,h=20,w=20,gover,score;
int x,y,fx,fy,flag;
void setup()
{
    gover=0;
    x=h/2;
    y=w/2;
    label1:
        fx=rand()%20;
        if(fx==0)
            goto label1;
    label2:
        fy=rand()%20;
        if(fy==0)
            goto label2;
        score=0;
}
void draw()
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
void input()
{
    if(kbhit())
    {
        switch(getch())
        {
            case 'j':
                flag=1;
                break;
            case 'k':
                flag=2;
                break;
            case 'l':
                flag=3;
                break;
            case 'i':
                flag=4;
                break;
            case 'q':
                gover=1;
                printf("Why!! Lets Play another game...\n");
                break;
        }
    }
}
void logic()
{
    sleep(0.5);
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
}
int main()
{
    //int m,n;
    setup();
    while(!gover)
    {
        draw();
        input();
        logic();
    }
}