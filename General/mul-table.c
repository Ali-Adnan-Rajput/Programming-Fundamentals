#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number :");
    scanf("%d", &n);
    while (i <= n)
    {
        int j = 1;
        while (j <= n)
        {
            printf("%d*%d=%d\n", i, j, i * j);
            j++;}
        i++;}
    return 0;
}
