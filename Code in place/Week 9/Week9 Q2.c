#include <stdio.h>

int main() {
    int arr[4] = {1, 2, 3, 4};
    int i, count = 0;

    printf("Array elements: ");
    for(i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    for(i = 0; i < 4; i++) {
        if(arr[i] % 2 == 0) {
            count = count + 1;
        }
    }

    printf("\nTotal even numbers: %d", count);

    return 0;
    
}

