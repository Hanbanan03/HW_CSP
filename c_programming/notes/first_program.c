// HW 7th first program

#include <stdio.h>
int main(void){
    char name[10];

    printf("What is your name?:\n");
    fgets(name, sizeof(name), stdin);
    printf("Hello %s, welcome to your first program!", name);

    return 0;
}