#include<stdio.h>
#include<conio.h>
#include <stdbool.h>

// What are "%d, %c, %f"?
// They all are format specifier which is used to print variable according to data type
// "%d" = for int
// "%c" = for character
// "%f" = for float
// "%lf" = for double
// "%vo" = for void
// and these all are primitive data types

void main() {
    char letter = 'a'; // string (sentence, letters)
    int myAge = 16; // number
    bool isMarried = false; // boolean (True or False)
    float gravity = 9.8; // float (decimal)
    double pi = 3.141592653; // complex float (more numbers)
    
    printf("My name is %c", letter);
    printf("My age is %d", myAge);
    printf("Is Married: %d", isMarried);
    printf("The value of gravity: %f", gravity);
    printf("The value of pi: %lf", pi);
}

