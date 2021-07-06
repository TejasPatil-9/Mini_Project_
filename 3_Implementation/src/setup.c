// to give fruit at different location
#include "fun.h"
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <unistd.h>
int h=20,w=20;
int x,y,fx,fy,score;
void setup()
{ 
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