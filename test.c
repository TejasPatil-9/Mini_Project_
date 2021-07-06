#include "fun.h"
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <unistd.h>
int gover=0;
int main()
{
    setup();
    while(!gover)
    {
        draw();
        input();
        logic();
    }
}