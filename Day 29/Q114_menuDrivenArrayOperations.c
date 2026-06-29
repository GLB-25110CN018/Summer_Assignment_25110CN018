#include <stdio.h>

int main() {
    int arr[5], i, choice, sum = 0;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);

    printf("1. Display\n2. Sum\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            printf("Array: ");
            for(i = 0; i < 5; i++)
                printf("%d ", arr[i]);
            break;

        case 2:
            for(i = 0; i < 5; i++)
                sum += arr[i];
            printf("Sum = %d", sum);
            break;

        default:
            printf("Invalid Choice");
    }

    return 0;
}