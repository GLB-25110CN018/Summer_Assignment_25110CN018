#include <stdio.h>

int main() {
    int arr[5], i, key;
    int low = 0, high = 4, mid, found = 0;

    printf("Enter 5 sorted elements:\n");

    for (i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter element to search: ");
    scanf("%d", &key);

    while (low <= high) {

        mid = (low + high) / 2;

        if (arr[mid] == key) {
            found = 1;
            break;
        }
        else if (key < arr[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    if (found)
        printf("Element Found");
    else
        printf("Element Not Found");

    return 0;
}