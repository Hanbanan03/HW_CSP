// HW 7th conditonals notes
#include <stdio.h>
#include <string.h>

int main(void){
    int grade;
    char name[50];
    printf("What is your grade in percent? ");
    scanf("%d", &grade);

    printf("What is your name? ");
    scanf("%s", &grade);

    //printf("%d\n", strcmp(name, "Hannah") == 0);
    if(name=="hannah"){
        printf("You dont get a grade!\n");
    }else if(grade>= 100){
        printf("You have an A!\n");
    }else if(grade >= 80){
        printf("You have a B\n");
    }else{
        printf("You are failing\n");
    }


    return 0;
    }

//What puts something inside of the “if” statement?
//: curly brackets
//How are conditions written in C?
//: if else if and else
//How do we write elif conditions in C?
//: else if
//When do else conditions run?
//: when there are no other options
//What are the 3 logical operators in C?
//: &&=and ||=or !=not
