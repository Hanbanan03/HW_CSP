// HW 7th expresions notes
#include <stdio.h>
#include <math.h>

int main(void){
    int year = 2025;
    float pi = 3.14;
    double long_pi = 3.1415926;

    printf("%d\n", 8/3);
    printf("%d.2\n", 8.0/3);
    printf("%.2f\n", pow(2,4));

    return 0;
}

//What is the difference between an integer and a float in C?
//: an interger is a whole number a float is a decimal
//How does C handle integer division compared to float division?
//:Interger division gets rid the decimal, float division keeps the decimal
//List the arithmetic operators available in C and their functions.
//: +, -, *, /, %
//What is the modulus operator, and how is it used?
//: it gives the remaidr of division
//How do you round a float to the nearest integer in C?
//: use the round() function from math.h
//What is type casting in C? Provide an example of explicit type casting.
//: type casting is coverting one data type to another
//How do compound assignment operators work in C? List three examples.
//: they combine the arithmatic operators
//What is the purpose of the math.h library? Name three functions it provides.
//: it provides mathmatical functions pow() sqrt() round()
//How do you print a float with a specific number of decimal places using printf()?
//: use %.nf where n is the number of decimal places
//What happens when you mix integer and float operations in C?
//: the interger is promoted to a float and the operation is performed as a float operation
