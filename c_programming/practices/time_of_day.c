//HW 7th time of day
#include <stdio.h>


int main(void){
    int hour;
    printf("What time is it in military time: ");
    scanf("%d", &hour);

     } if (hour < 12) {
        printf("Good Morning!\n");
    } else if (hour < 18) {
        printf("Good Afternoon!\n");
    } else {
        printf("Good Evening!\n");
    }

    return 0;
}