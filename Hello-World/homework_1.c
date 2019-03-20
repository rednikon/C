//Homework #1 - CMPR.X400.(810) C Programming
// Created by veemac on March 19, 2019

#include <stdio.h>

//Problem 1: Print "Welcome to the class of C beginners" with a new line after Welcome
void problem_1(){
    printf("Welcome\nto the class of C beginners.");
}

//Problem 2: Spell out "Hello" with asterisks
void problem_2(){
    //your code goes here
    printf("***\t\t***\t*******\t***\t\t***\t\t\t***");
    printf("***\t\t***\t***\t\t***\t\t***\t\t***\t***");
    printf("***\t\t***\t***\t\t***\t\t***\t\t***\t***");
    printf("**************\t*******\t***\t\t***\t***");
    printf("***\t\t***\t***\t\t***\t\t***\t\t***\t***");
    printf("***\t\t***\t***\t\t***\t\t***\t\t***\t***");
    printf("***\t\t***\t*******\t*******\t*******\t\t***");
}

//Problem 3: create a square with - and |
void problem_3(){
    //your code goes here
    printf("--------------------");
    printf("|                  |");
    printf("|                  |");
    printf("|                  |");
    printf("|                  |");
    printf("|                  |");
    printf("|                  |");
    printf("|                  |");
    printf("|                  |");
    printf("--------------------");
    
    
}

int main (void){
    
    problem_1();   //call the function problem_1
    problem_2();   //call the function problem_2
    problem_3();   //call the function problem_3
    
    return 0;
}
