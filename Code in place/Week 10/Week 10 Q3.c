#include <stdio.h>
#include <string.h>

int main() {
    char firstName[50] = "Ali";
    char lastName[] = " Adnan";

    strcat(firstName, lastName);

    printf("Full name: %s\n", firstName);
    return 0;
}
