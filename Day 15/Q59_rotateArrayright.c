#include <stdio.h>

int main() {
    int arr[5], i, last;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    last = arr[4];

    for (i = 4; i > 0; i--) {
        arr[i] = arr[i - 1];
    }

    arr[0] = last;

    printf("Right Rotated Array:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}