#include <stdio.h>

int main()
{
    int arr[4] = {1, 2, 3, 4};
    int i, first, second;

    first = arr[0];
    second = arr[0];
    

    for(i = 1; i < 4; i++) {
        if(arr[i] > first) {
            second = first;
            first = arr[i];
        }
        else if(arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }

    printf("Array elements: ");
    for(i = 0; i < 4; i++) {
        printf("%d ", arr[i]);
    }

    printf("\nTwo largest numbers are: %d and %d", second, first);

    return 0;
}

