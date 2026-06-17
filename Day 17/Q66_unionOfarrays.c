#include <stdio.h>

int main() {
    int a[3], b[3];
    int i, j, found;

    printf("Enter 3 elements of first array:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 3 elements of second array:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
    }

    printf("Union: ");

    for (i = 0; i < 3; i++) {
        printf("%d ", a[i]);
    }

    for (i = 0; i < 3; i++) {
        found = 0;

        for (j = 0; j < 3; j++) {
            if (b[i] == a[j]) {
                found = 1;
                break;
            }
        }

        if (!found) {
            printf("%d ", b[i]);
        }
    }

    return 0;
}