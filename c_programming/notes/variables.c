//HW 7th variables notes
#include <stdio.h>

int main (void){
    int grade; //4 bytes
    float pi = 3.14; //4bytes
    double long_pi = 3.1415926358; //8 bytes
    char letter_grade; //1 byte 
    char name[] = "Hannah";
    //User input 
    printf("What is your grade percentage as a whole number:\n");
    scanf("%d", &grade);
    
   
    printf("What is your letter grade:\n");
    scanf(" %c", &letter_grade);
    
    
    //printf("What is your grade percentage as a whole number: ");
    //scanf("%d", &grade);

    printf("%s did it!\n", name);
    printf("You have a %d, in the class. That means you have a %c\n", grade, letter_grade);


    return 0;
}
//What is the main difference between declaring variables in Python and C? 
// :all variables take the same amount of space, Intergers take up 4 bytes of space and a character takes up 1 byte
//In C, what is the purpose of specifying a data type when declaring a variable? 
// : the amount of bytes you can have in a line 
//List three common data types used in C and their corresponding format specifiers for printf().
// :  stings %s, intergers %d, characters %c
//How do you declare and initialize an integer variable named "age" with the value 25 in C? - 
// : int age = 25
//What is the difference between printf() and scanf() functions in C?
// : scanf is for input, printf is for output
//Write a C program that asks the user for their name and age, then prints a greeting message with their information.
// : we did this already
//How do you add comments in C? What are the two types of comments? 
// : add two //, /* ?*
//What is the purpose of the #include <stdio.h> line at the beginning of a C program?
// : standard library inputs outputs- it tells the code we will be using these
//In C, what is the significance of the main() function?
// : it is the main function for the code
//What is the difference between %d and %f format specifiers in printf()?
//: intergers and floating points
//How do you print a newline character in C?
//: \n
//What is the purpose of the & symbol when using scanf() to get user input?
//:to get the thing
//How do you declare a constant in C? Provide an example.
// : sets a variable to be unchangeable