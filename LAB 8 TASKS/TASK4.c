#include <stdio.h>

int main() {
    float temp[3][3][3], avg[3], sum;
    int x, y, z;
    int hottest;
    int max_x = 0, max_y = 0, max_z = 0;
    float max_temp;

    for (z = 0; z < 3; z++) {
    	printf("Layer %d\n", z+1);
        for (y = 0; y < 3; y++) {
            for (x = 0; x < 3; x++) {
                printf("Enter temperature at (%d,%d,%d): ", x, y, z);
                scanf("%f", &temp[z][y][x]);
            }
        }
    }

    for (z = 0; z < 3; z++) {
        sum = 0; 
        for (y = 0; y < 3; y++) {
            for (x = 0; x < 3; x++) {
                sum += temp[z][y][x];
            }
        }
        avg[z] = sum / 9; 
        printf("Average temperature for layer %d is %.2f\n", z, avg[z]);
    }

    // Find the hottest layer
    hottest = 0;
    for (z = 1; z < 3; z++) {
        if (avg[z] > avg[hottest]) {
            hottest = z;
        }
    }
    printf("Hottest layer is %d with average %.2f\n", hottest, avg[hottest]);

    max_temp = temp[0][0][0];
    for (z = 0; z < 3; z++) {
        for (y = 0; y < 3; y++) {
            for (x = 0; x < 3; x++) {
                if (temp[z][y][x] > max_temp) {
                    max_temp = temp[z][y][x];
                    max_x = x;
                    max_y = y;
                    max_z = z;
                }
            }
        }
    }

    printf("Maximum temperature is %.2f at coordinates (%d,%d,%d)\n", max_temp, max_x, max_y, max_z);

    return 0;
}


