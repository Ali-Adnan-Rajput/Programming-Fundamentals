#include<stdio.h>
int main(){
	int i,j,k;
	//1st
	int m;
	int n;
	printf("Enter rows and columns of 1st matrix :");
	scanf("%d %d", &m , &n);
	//int n;
//	printf("Enter columns of 1st matrix :");
//	scanf("%d", &n);
	
	int a[m][n];
	//Input 1st
	printf("\nEnter elements of 1st matrix :\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			scanf("%d", &a[i][j]);
		}
	}
	//2nd
	int p;
	int q;
	printf("Enter rows and columns of 2nd matrix :");
	scanf("%d %d", &p, &q);
	//int q;
//	printf("Enter columns of 2nd matrix :");
//	scanf("%d", &q);
	int b[p][q];
	//Input 2nd 
		printf("\nEnter elements of 2nd matrix :\n");
	for(i=0;i<p;i++){
		for(j=0;j<q;j++){
			scanf("%d", &b[i][j]);
		}
	}
	
	if(n!=p){
		printf("The matrix can't be multiplied");
	}
	else{
		int res[m][q];
			for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			res[i][j] = 0;
			for(k=0;k<n;k++){
				res[i][j] += a[i][k]*b[k][j];
			}
		}
	}
	// print res[][]
	printf("The resultant matrix is :");
	for(i=0;i<m;i++){
		for(j=0;j<q;j++){
			printf("%d ", res[i][j]);
		}
	}
	}	
	return 0;
}
