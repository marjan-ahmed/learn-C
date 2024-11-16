#include<stdio.h>
#include<conio.h>

// Variable: used to store the information and it can be change in some course of time

// syntax: datatype [variable_name]

// scope of variable: ability of variable to store data globally and locally.

// types of Scope of variable: 1. Local  2. Global

// Local Example:
// void main() {
// int x = 10
// }

// Global Example:
// int x = 11
// void main() {
// int y = 11
// }

int x = 100;
int y = 20;
void main() {
    int x = 10;
    printf("The value of x = %d", x); // what will be print?
    printf("\n"); // used for new line
    printf("The value of y = %d", y);
    getch();
}

