#include <stdio.h>

void multiply(int arr[2][3], int brr[3][3], int res[2][3]) {
    int i, j, k;

    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            res[i][j] = 0;
            for(k = 0; k < 3; k++) {
                res[i][j] += arr[i][k] * brr[k][j];
            }
        }
    }
}

void printMatrix(int res[2][3]) {
    int i, j;
    for(i = 0; i < 2; i++) {
        for(j = 0; j < 3; j++) {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }
}

int main() {

    int arr[2][3] = {1,2,3,4,5,6};
    int brr[3][3] = {1,2,3,4,5,6,7,8,9};
    int res[2][3];

    multiply(arr, brr, res);

    printf("Resultant Matrix:\n");
    printMatrix(res);

    return 0;
}
