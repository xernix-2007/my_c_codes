#include <stdio.h>

int main() {
    int n, i, j, space;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        // print spaces
        for (space = 1; space <= n - i; space++) {
            printf(" ");
        }

        // print increasing sequence
        for (j = 1; j <= i; j++) {
            printf("%d ", j);
        }

        printf("\n"); // move to next row
    }

    return 0;
}
