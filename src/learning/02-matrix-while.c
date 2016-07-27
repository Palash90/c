#include<stdio.h>

int main(){
	int col, row, row_counter = 0, col_counter = 0;
	int total_sum = 0;
	int row_sum = 0;
	int data;

	printf("Enter number of rows and columns: ");
	scanf("%d", &row);
	scanf("%d", &col);
	
	while(row > row_counter){
		col_counter = 0;
		row_sum = 0;
		while(col > col_counter){
			printf("Enter %d-th row and %d-th column data: ", row_counter + 1, col_counter + 1);
			scanf("%d", &data);
			row_sum = row_sum + data;
			col_counter = col_counter + 1;
		}

		total_sum = total_sum + row_sum * row_sum;
		
		row_counter = row_counter +1;
	}
	printf("Result is: %d\n", total_sum);
	
	return 0;
}
