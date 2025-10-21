#include <stdio.h>

int main() {
    float temp[5][7], avg[5], sum[5] = {0}, highAvg = 0;         
    int i, j, cityHigh = 0; 

    printf("Enter weekly temperatures for 5 cities\n");
    for (i = 0; i < 5; i++) {
        printf("Enter temperature for city %d\n", i + 1);
        for (j = 0; j < 7; j++) {
            scanf("%f", &temp[i][j]);
            sum[i] += temp[i][j];   
        }
    }

    for (i = 0; i < 5; i++) {
        avg[i] = sum[i] / 7;
        if (avg[i] > highAvg) {
            highAvg = avg[i];
            cityHigh = i;
        }
    }

    printf("Average temperatures for each city:\n");
    for (i = 0; i < 5; i++) {
        printf("City %d: %.2f\n", i + 1, avg[i]);
    }

    printf("City %d has the highest weekly average temperature of %.2f\n", cityHigh + 1, highAvg);

    return 0;
}

