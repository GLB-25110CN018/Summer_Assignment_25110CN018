#include <stdio.h>

int main() {
    int roll[3], i;
    char name[3][20];
    float marks[3];

    for(i = 0; i < 3; i++) {
        printf("Enter Roll, Name and Marks: ");
        scanf("%d %s %f", &roll[i], name[i], &marks[i]);
    }

    printf("\nStudent Records:\n");

    for(i = 0; i < 3; i++) {
        printf("%d %s %.2f\n", roll[i], name[i], marks[i]);
    }

    return 0;
}