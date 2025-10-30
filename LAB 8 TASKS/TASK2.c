#include <stdio.h>

int main() {
    int grid[3][3], check[10] = {0};
    int i, j, valid = 1;

    printf("Enter 3x3 Sudoku grid values:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &grid[i][j]);

            if (grid[i][j] < 1 || grid[i][j] > 9)
                valid = 0;
            else if (check[grid[i][j]] == 1)
                valid = 0;
            else
                check[grid[i][j]] = 1;
        }
    }

    if (valid == 1)
        printf("Valid Grid\n");
    else
        printf("Invalid Grid\n");

    return 0;
}



