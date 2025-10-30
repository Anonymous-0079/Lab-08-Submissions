#include<stdio.h>
int main () {
	int sales[4][5], price, totalsales[5] = {0}, totalsalesman[4] = {0}, high_salesman = 0, i, j, highest = 0;
	float bonus;

	for (i=0; i<4; i++) {
		printf("Salesman %d:\n", i+1);
		for(j=0; j<5; j++) {
			printf("Product %d: PKR.", j+1);
			scanf("%d", &sales[i][j]);
			
			totalsales[j] += sales[i][j]; 
			totalsalesman[i] += sales[i][j]; 
			
			if(sales[i][j] > highest) {
				highest = sales[i][j]; 
				high_salesman = i; 
			}
		}
	}

	for(i=0; i<4; i++){
		printf("Salesman %d: Rs.%d", i+1, totalsalesman[i]);
		if (totalsalesman[i] > 10000) {
			bonus = totalsalesman[i] *0.10;
			printf("  (Bonus: PKR:%.2f)", bonus);
		}
		printf("\n");
	}
	
	for (j=0; j<5; j++) {
		printf("Product %d: PKR.%d\n", j+1, totalsales[j]);
	}
	
	printf("Salesman %d sold the most expensive product worth PKR.%d\n", high_salesman+1, highest);
	return 0;
	
}


