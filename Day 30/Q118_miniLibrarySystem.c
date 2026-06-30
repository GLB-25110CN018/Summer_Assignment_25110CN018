#include <stdio.h>

int main() {
    int id[3], i;
    char book[3][20];

    for(i = 0; i < 3; i++) {
        printf("Enter Book ID and Name: ");
        scanf("%d %s", &id[i], book[i]);
    }

    printf("\nLibrary Records:\n");

    for(i = 0; i < 3; i++) {
        printf("%d %s\n", id[i], book[i]);
    }

    return 0;
}