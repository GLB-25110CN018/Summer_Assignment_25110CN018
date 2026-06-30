#include <stdio.h>

int main() {
    int id[3], i;
    char name[3][20];
    float salary[3];

    for(i = 0; i < 3; i++) {
        printf("Enter ID, Name and Salary: ");
        scanf("%d %s %f", &id[i], name[i], &salary[i]);
    }

    printf("\nEmployee Records:\n");

    for(i = 0; i < 3; i++) {
        printf("%d %s %.2f\n", id[i], name[i], salary[i]);
    }

    return 0;
}