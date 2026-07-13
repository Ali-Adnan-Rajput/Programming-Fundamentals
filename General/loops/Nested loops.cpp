
#include <stdio.h>

int main() {
    for(int i=1; i<=10; i++){
    	for(int j=1; j<=10; j++){
    		printf("%d x %d = %d \n", i, j, i*j);
		}
	printf("\n");
	}
	
	for(int i=1; i<=5; i++){
    	for(int j=1; j<=5; j++){
    	printf("%d ", j);
		}
		printf("\n");
}
printf("\n");
long sum = 0;
 for(int i=1; i<=10; i++){
    	for(int j=1; j<=10; j++){
		 sum += i*j;
			printf("Sum = %d \n", sum);
}
printf("\n");
}
}
