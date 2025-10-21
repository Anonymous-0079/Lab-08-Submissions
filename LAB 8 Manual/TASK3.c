#include <stdio.h>

int main() {
    int original[5][5], sharpened[5][5], i, j, Sum_O = 0, Sum_S = 0, val, N_val;
    float O_avg, S_avg;

    printf("Enter the 5x5 grayscale intensity values bertween 0 and 255\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &original[i][j]);
            Sum_O += original[i][j];
        }
    }

    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            val = original[i][j] * 2;
            if (val > 255) 
			{
                N_val = 255;   
            }else{
            	N_val = val;
			}
			sharpened[i][j] = N_val;
            Sum_S += N_val;
        }
    }

    printf("Sharpened Image Matrix\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("%d ", sharpened[i][j]);
        }
        printf("\n");
    }

    O_avg = Sum_O/ 25.0;
    S_avg = Sum_S / 25.0;

    printf("Original Average pixel intensity is %.2f\n", O_avg);
    printf("Sharpened Average pixel intensity is %.2f\n", S_avg);

    return 0;
}

