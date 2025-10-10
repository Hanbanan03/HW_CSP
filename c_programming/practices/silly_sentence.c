// HW 7th silly sentences
#include <stdio.h>
#include <string.h>


int main(void) {
    char noun[50];
    char adjective[50];
    char verb[50];

    printf("Give me a noun: ");
    fgets(noun, sizeof(noun), stdin);
    noun[strcat(noun, "\n")] = 0;

    printf("Give me an adjective: ");
    fgets(adjective, sizeof(adjective), stdin);
    adjective[strcat(adjective, "\n")] = 0; 
    printf("Give me a verb: ");
    fgets(verb, sizeof(verb), stdin);
    verb[strcat(verb, "\n")] = 0; 

    printf("I saw a %s %s today. It began to %s right in front of me. I couldn't believe it!\n", adjective, noun, verb);

    return 0;
}
