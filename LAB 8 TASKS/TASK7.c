#include <stdio.h>

int main() {
    int data[3][3], key[3][3], encrypted[3][3], i, j, maxVal, maxRow = 0, maxCol = 0;
    
    printf("Enter elements of 3x3 Data matrix\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &data[i][j]);

    printf("Enter elements of 3x3 Key matrix\n");
    for (i = 0; i < 3; i++)
        for (j = 0; j < 3; j++)
            scanf("%d", &key[i][j]);

    printf("The Encrypted Matrix is\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            encrypted[i][j] = (data[i][j] * key[i][j]) + (i + j);
            printf("%d ", encrypted[i][j]);
        }
        printf("\n");
    }

    maxVal = encrypted[0][0];
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            if (encrypted[i][j] > maxVal) {
                maxVal = encrypted[i][j];
                maxRow = i;
                maxCol = j;
            }
        }
    }

    printf("Maximum Encrypted Value is %d at position (%d, %d)\n",maxVal, maxRow, maxCol);

    return 0;
}

