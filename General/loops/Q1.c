#include <stdio.h>

int main() {
    int arr[4] = {1, 2, 3, 4};
    int i, temp;

    printf("Original array: ");
    for(i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    // Reverse array
    for(i = 0; i < 2; i++) {
        temp = arr[i];
        arr[i] = arr[3 - i];
        arr[3 - i] = temp;
    }

    printf("\nReversed array: ");
    for(i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
