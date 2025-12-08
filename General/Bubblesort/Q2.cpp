#include<stdio.h>
int main(){
	int arr[15] = {42,68,35,1,70,25,79,59,63,65,6,46,82,28,62};
	int i,j;
	for(i=0;i<15;i++){
	printf("%d ", arr[i]);
	}
	//bubble sort
	for(i=0;i<15-1;i++){
		for(j=0;j<15-1;j++){
		if(arr[j] > arr[j+1]){
	int temp = arr[j];
	arr[j] = arr[j+1];
	arr[j+1] = temp;
}
}
	}
	printf("\n");
	for(i=0;i<15;i++){
	printf("%d ", arr[i]);
	}
	return 0;
}
