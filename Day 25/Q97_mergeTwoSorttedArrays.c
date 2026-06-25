#include <stdio.h>

int main() {
    int a[3], b[3], c[6];
    int i = 0, j = 0, k = 0;

    printf("Enter 3 sorted elements of first array:\n");
    for(i = 0; i < 3; i++)
        scanf("%d", &a[i]);

    printf("Enter 3 sorted elements of second array:\n");
    for(i = 0; i < 3; i++)
        scanf("%d", &b[i]);

    i = j = 0;

    while(i < 3 && j < 3) {
        if(a[i] < b[j])
            c[k++] = a[i++];
        else
            c[k++] = b[j++];
    }

    while(i < 3)
        c[k++] = a[i++];

    while(j < 3)
        c[k++] = b[j++];

    printf("Merged Array:\n");
    for(i = 0; i < 6; i++)
        printf("%d ", c[i]);

    return 0;
}