#include<stdio.h>
int main(){
	int i,n;
	int sum = 0;
	printf("Enter number of elements of an array :");
	scanf("%d", &n);
	int arr[n];
	
	printf("Enter elements of an array : ");
	for(i=0;i<n;i++){
		scanf("%d", &arr[i]);
	}
	sum += arr[i];
	printf("The total sum of elements in an array is :%d", sum);
	return 0;
}
