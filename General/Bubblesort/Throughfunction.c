#include<stdio.h>
void fillarray(int arr[]) {
	int i;
	for(i=0;i<5;i++){
		scanf("%d", &arr[i]);
		printf("%d ", arr[i]);
	}
	printf("\n");

}

void sortarray(int arr[]){
	int i,j;
	for(i=0;i<5-1;i++){
		for(j=0;j<5-1;j++){
			if(arr[j] > arr[j+1]){
				int temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}
}

void printarray(int arr[]){
	int i;
	for(i=0;i<5;i++){
		printf("%d ", arr[i]);
	}
}
int main(){
	int arr[5];
	printf("Enter elements of an array :");
	fillarray(arr);
	
	sortarray(arr);
	printf("The sorted array is given below:\n");
	
	printarray(arr);
	return 0;
}
