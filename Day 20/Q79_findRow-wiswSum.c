#include <stdio.h>

int main() {
    int a[2][2];
    int i, j, sum;

    printf("Enter matrix:\n");

    for(i = 0; i < 2; i++)
        for(j = 0; j < 2; j++)
            scanf("%d", &a[i][j]);

    for(i = 0; i < 2; i++) {
        sum = 0;

        for(j = 0; j < 2; j++) {
            sum += a[i][j];
        }

        printf("Row %d Sum = %d\n", i + 1, sum);
    }

    return 0;
}