#include<stdio.h>
int main(){
	int r;
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	int c;
	printf("Enter the number of columns: ");
	scanf("%d", &c);
	int a[r][c];
	int i, j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	
	int sum = 0;
		for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			sum += a[i][j];
		}
	}
	printf("The sum is: %d", sum);

	
	return 0;
}
