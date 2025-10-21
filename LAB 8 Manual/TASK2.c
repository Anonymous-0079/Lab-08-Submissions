#include <stdio.h>

int main() {
    int beds[4][6], i, j, totalOccupied = 0, totalVacant = 0, wardOccupied[4] = {0}, maxWard = 0;        
	float occupancyRate;
	
    printf("Enter bed status for 4 wards: 1 = occupied, 0 = vacant\n");
    for (i = 0; i < 4; i++) {
        printf("Ward %d:\n", i + 1);
        for (j = 0; j < 6; j++) {
            scanf("%d", &beds[i][j]);

            if (beds[i][j] == 1) {
                totalOccupied++;
                wardOccupied[i]++;
            } else {
                totalVacant++;
            }
        }
    }

    for (i = 1; i < 4; i++) {
        if (wardOccupied[i] > wardOccupied[maxWard]) {
            maxWard = i;
        }
    }

	occupancyRate = (totalOccupied / 24.0) * 100;
	
    printf("Total Occupied Beds are %d\n", totalOccupied);
    printf("Total Vacant Beds are %d\n", totalVacant);
    printf("Ward %d has the highest occupancy with %d beds occupied.\n", maxWard + 1, wardOccupied[maxWard]);
    printf("Overall Occupancy Rate: %.2f%%\n", occupancyRate);

    if (occupancyRate < 60.0) {
        printf("Increase Admission Drive\n");
    }

    return 0;
}

