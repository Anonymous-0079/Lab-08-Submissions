#include <stdio.h>

int main() {
    int marks[2][3][3], total[2][3] = {0}, i, j, k, overallclass = 0, overallstudent = 0, overallmarks = 0;

    for (i = 0; i < 2; i++) {
        printf("Enter marks for Class %d:\n", i + 1);
        for (j = 0; j < 3; j++) {
            printf("Student %d (3 subjects): ", j + 1);
            for (k = 0; k < 3; k++) {
                scanf("%d", &marks[i][j][k]);
                total[i][j] += marks[i][j][k];
            }
        }
    }

    for (i = 0; i < 2; i++) {
        int topmarks= 0, topclass= 0;
        for (j = 1; j < 3; j++) {
            if (total[i][j] > topmarks) {
                topmarks = total[i][j];
                topclass = j;
            }
        }

        printf("Top Performer of Class %d: Student %d with %d marks\n",i + 1, topclass + 1, topmarks);

        if (topmarks > overallmarks) {
            overallmarks = topmarks;
            overallclass = i;
            overallstudent = topclass;
        }
    }

    printf("Overall Top Performer: Class %d - Student %d with %d marks\n",overallclass + 1, overallstudent + 1, overallmarks);

    return 0;
}


