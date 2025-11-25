#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i;
    int *arr;

    printf("Enter number of integers: ");
    scanf("%d", &n);

    
    arr = (int*) malloc(n * sizeof(int));

    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

   
    for(i = 0; i < n; i++) {
        arr[i] = i * i;
    }

    printf("Squares of indices:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

   
    free(arr);

    return 0;
}
