// HW 7th name decorator

#include <stdio.h>
#include <string.h>

int main(void) {
    char name[30];
    printf("What is your name: ");
    scanf("%s", name);
    while (getchar() != '\n');

    char decorated_name[50] = "<<< ";
    strcat(decorated_name, name);
    strcat(decorated_name, " >>>");
    printf("%s\n", decorated_name);

    return 0;
}
