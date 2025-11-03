#include <stdio.h>
#include <string.h>

int main() {
    char source[] = "Programming";
    char dest[5];

    strncpy(dest, source, 4);
    dest[4] = '\0'; // Add null terminator manually

    printf("Copied string: %s\n", dest);
    return 0;
}
