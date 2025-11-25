#include<stdio.h>
int main(){
	int r;
	printf("Enter the number of rows: ");
	scanf("%d", &r);
	int c;
	printf("Enter the number of columns: ");
	scanf("%d", &c);
	int a[r][c];
	int i;
	int j;
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			scanf("%d", &a[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",a[i][j]);
		}
		printf("\n");
	}

	
	return 0;
}
