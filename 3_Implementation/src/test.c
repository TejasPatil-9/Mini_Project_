/**
 * @file test.c
 * @author K C Pooja (poojachandkc@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2021-07-07
 * 
 * @copyright Copyright (c) 2021
 * 
 */
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