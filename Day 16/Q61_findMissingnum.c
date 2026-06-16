#include <stdio.h>

int main() {
    int arr[4], i;
    int sum = 0, total = 15;

    printf("Enter 4 elements:\n");

    for (i = 0; i < 4; i++) {
        scanf("%d", &arr[i]);
        sum = sum + arr[i];
    }

    printf("Missing Number = %d", total - sum);

    return 0;
}