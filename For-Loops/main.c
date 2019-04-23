//Homework #2 - CMPR.X400.(810) C Programming
// Created by veemac on March 26, 2019

#include <stdio.h>

int main(void)
{
    //define variables
    int i=0;
    char x = '-', y = '|';
    //first loop for top horizontal line
    for(i=0; i < 20; i++) {
        printf("%c", x);
    }
    printf("\n");
    //loop for vertical lines
    for(i=0; i < 8; i++) {
        printf("%c                   %c", y, y);
        printf("\n");
    }
    //bottom horizontal line
    for(i=0; i < 20; i++) {
        printf("%c", x);
    }
}
