#include<stdio.h>
int main(){
	int arr[5] = {100,24343,32344,433,0};
	int i,j;
	for(i=0;i<5;i++){
		printf("%d ", arr[i]);
	}
	//bubble sort
	for(i=0;i<5-1;i++){
		//bool flag = true;
		for(j=0;j<5-1-i;j++){
			if(arr[j]<arr[j+1]){
				int temp =arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				//flag = false;			
			}
		}
	}
	//if(flag == true) break;
	
	printf("\n");
	for(i=0;i<5;i++){
		printf("%d ", arr[i]);
	}
	
	return 0;
}
