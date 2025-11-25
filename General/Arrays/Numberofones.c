#include<stdio.h>
int main(){
	int i,j;
	int arr[3][4] = {{1,1,0,0},{1,1,1,1},{0,1,0,1}};
	//1 1 0 0
	//1 1 1 1
	//0 1 0 1
	
	int maxCount = 0;
	int maxIdx = -1;
	for(i=0;i<3;i++){
		int count = 0;
		for(j=0;j<4;j++){
			if(arr[i][j] ==1) count++;
			maxCount = count;
			maxIdx = i;
		}
		
	}
	printf("%d", maxIdx);
	return 0;
}
