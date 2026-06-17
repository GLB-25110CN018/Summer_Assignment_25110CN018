#include <stdio.h>

int main() {
    int a[3], b[3];
    int i, j;

    printf("Enter 3 elements of first array:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &a[i]);
    }

    printf("Enter 3 elements of second array:\n");
    for (i = 0; i < 3; i++) {
        scanf("%d", &b[i]);
    }

    printf("Common Elements: ");

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (a[i] == b[j]) {
                printf("%d ", a[i]);
            }
        }
    }

    return 0;
}