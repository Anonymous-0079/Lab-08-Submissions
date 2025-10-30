#include <stdio.h>

int main() {
    int seats[10][4] = {0}, row, col, i, j, fullRows = 0;
    char choice;

    do {
        printf("Enter row (1-10): ");
        scanf("%d", &row);
        printf("Enter seat (1-4): ");
        scanf("%d", &col);

        if (row >= 1 && row <= 10 && col >= 1 && col <= 4) {
            if (seats[row - 1][col - 1] == 0) {
                seats[row - 1][col - 1] = 1;
                printf("Seat reserved\n");
            } else {
                printf("Seat already booked\n");
            }
        } else {
            printf("Invalid seat\n");
        }

        printf("Reserve another seat? (Y for yes, N for no):");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    for (i = 0; i < 10; i++) {
        printf("Row %2d: ", i + 1);
        for (j = 0; j < 4; j++) {
            printf("%d ", seats[i][j]);
        }
        printf("\n");
    }

    for ( i = 0; i < 10; i++){
		int sum = 0;
		for ( j = 0; j < 4; j++) {
				sum += seats[i][j];
		}
		if (sum == 4) {
			fullRows++;
			}
	}

    printf("Fully booked rows are %d\n", fullRows);
    return 0;
}


