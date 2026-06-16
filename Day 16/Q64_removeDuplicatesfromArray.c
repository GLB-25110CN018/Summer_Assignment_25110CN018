#include <stdio.h>

int main() {
    int arr[5], i, j;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Array without duplicates:\n");

    for (i = 0; i < 5; i++) {
        int duplicate = 0;

        for (j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                duplicate = 1;
                break;
            }
        }

        if (!duplicate) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}