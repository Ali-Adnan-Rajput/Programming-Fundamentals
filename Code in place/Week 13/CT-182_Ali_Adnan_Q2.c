#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr;
    int i;

   
    arr = (int*) calloc(10, sizeof(int));

    
    if(arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

   
    printf("Array elements:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
