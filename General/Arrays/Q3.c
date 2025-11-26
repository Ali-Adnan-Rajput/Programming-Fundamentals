#include<stdio.h>
int main(){
	int r;
	printf("Enter number of students: ");
	scanf("%d", &r);
	int arr[100][2]; //{1, 30, 2, 40, 3, 70, 4, 80};
	int i, j;
	for(i=0;i<r;i++){
		for(j=0;j<2;j++){
			scanf("%d", &arr[i][j]);
		}
	}
	
	for(i=0;i<r;i++){
		for(j=0;j<2;j++){
			printf("%d ", arr[i][j]);
		}
		printf("\n");
}
return 0;

	}

	

