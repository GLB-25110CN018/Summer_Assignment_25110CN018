#include <stdio.h>

int main() {
    int arr[5], i, first;

    printf("Enter 5 elements:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    first = arr[0];

    for (i = 0; i < 4; i++) {
        arr[i] = arr[i + 1];
    }

    arr[4] = first;

    printf("Left Rotated Array:\n");

    for (i = 0; i < 5; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}