#include<stdio.h>
int main(){
	int i,j;
	int a[3][2] = {1,2,3,4,5,6};
	int b[2][4] = {1,2,3,4,5,6,7,8};
	int res[3][4];
	//multiplying
	int cr=2;
	int k;
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			 res[i][j] = 0;
			 for(k=0;k<cr;k++){
			 	res[i][j] += a[i][k]*b[k][j];
			 }
		}
	}
	//print res[][]
	for(i=0;i<3;i++){
		for(j=0;j<4;j++){
			printf("%d ", res[i][j]);
		}
		printf("\n");
	}
		return 0;
}
