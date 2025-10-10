// HW 7th name decorator

#include <stdio.h>
#include <string.h>


int main(void) {
    char name[50];

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    
    name[strcat(name, "\n")] = 0;

    printf(":) :) %s :) :)\n", name);
    
    return 0;
}
