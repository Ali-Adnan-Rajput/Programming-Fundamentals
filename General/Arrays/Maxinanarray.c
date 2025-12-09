#include<stdio.h>
#include<limits.h>
int main(){
	int i,n;
	printf("Enter number of elements :");
	scanf("%d", &n);
	int arr[n];
	printf("Enter elements :");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	
	int max = INT_MIN;
	for(i=0;i<n;i++){
	if(arr[i] > max){
	max = arr[i];
}
}
	printf("The max is : %d", max);
	return 0;
}
